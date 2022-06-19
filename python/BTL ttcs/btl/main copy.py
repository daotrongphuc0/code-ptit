import tkinter as tk
from tkinter import   BOTTOM, END, LEFT, TOP, filedialog
from PIL import ImageTk, Image
import cv2
from cv2 import sqrt
import numpy as np
def tinhKC(a,b,c,d):
    # tinh khoang cach giua 2 diem x(a,b) va y(c,d)
    x=sqrt((a-c)**2+(b-d)**2)
    return int(x[0])
def translate(image, x, y):
    #dich chuyen anh image theo chieu x don vi va theo chieu y don vi
    M = np.float32([[1, 0, x], [0, 1, y]])
    shifted = cv2.warpAffine(image, M, (image.shape[1], image.shape[0]))
    return shifted

def UpdateTop():
    #di chuyen anh len tren
    if addimg==1:
        global dc_y
        dc_y-=10
        imageUpdate()

def UpdateBottom():
    #di chuyen anh xuong duoi
    if addimg==1:
        global dc_y
        dc_y+=10
        imageUpdate()

def UpdateLeft():
    #di chuyen anh sang trai
    if addimg==1:
        global dc_x
        dc_x-=10
        imageUpdate()

def UpdateRight():
    #di chuyen anh sang phai
    if addimg==1:
        global dc_x
        dc_x+=10
        imageUpdate()

def imageUpdate():
    #update anh sau di chuyen 
    global img_num_arr,img_read,img_show,dc_x,dc_y
    if panelA!=None :# neu hinh anh da duoc mo
        img_num_arr= translate(img_read,dc_x,dc_y)
        img_show = cv2.cvtColor(img_num_arr, cv2.COLOR_BGR2RGB)
        img_show = Image.fromarray(img_show)
        img_show = ImageTk.PhotoImage(img_show)
        panelA.configure(image=img_show)
        panelA.image = img_show

def addPicture():
    # them hinh anh 
    global panelA,img_read,dc_x,dc_y,img_num_arr,img_show,btnsave
    path = filedialog.askopenfilename()

    btnsave.configure( text="Save",bg="green" ,command=saveImage) # hien thi button save
    btnsave.place(height=25, width=70,x=570,y=714)
    
    if len(path) > 0:# neu da lay duoc duong dan 
        global addimg
        dc_x=0  #setting toa do di chuyen anh ve 0,0
        dc_y=0
        img_read = cv2.imread(path)
        if img_read.shape[1]>600 or img_read.shape[0]>500:   # neu hinh anh co kich thuoc lon hon frame
            img_read = cv2.resize(src=img_read, dsize=(min(img_read.shape[1],600), min(img_read.shape[0],500)))
        img_num_arr = translate(img_read,dc_x,dc_y)
        img_show = cv2.cvtColor(img_num_arr, cv2.COLOR_BGR2RGB)
        img_show = Image.fromarray(img_show)
        img_show = ImageTk.PhotoImage(img_show)
        addimg =1     # xac nhan frame da co anh
        if panelA is None:   # neu hinh anh chua duoc tao thi tao hinh anh
            panelA = tk.Label(frameImage,image=img_show)
            panelA.image = img_show
            panelA.place(x=0,y=0)   

        else:
			# up date lai frame anh
            panelA.configure(image=img_show)
            panelA.image = img_show
            panelA.place(x=0,y=0)

def saveImage():
    img_num_arr= translate(img_read,dc_x,dc_y)
    img_show = cv2.cvtColor(img_num_arr, cv2.COLOR_BGR2RGB)
    img_show = Image.fromarray(img_show)
    filename = filedialog.asksaveasfile(mode='w', defaultextension=".jpg")
    if not filename:
        return
    img_show.save(filename)

def drawLine():
    #ve duong thang
    global action,recbutton,linebutton,circlebutton
    if addimg==1:
        if action !=1 :
            action =1
            linebutton.configure(bg="gray")   #set lai mau cac nut
            recbutton.configure(bg="white")
            circlebutton.configure(bg="white")
        else:
            action=0
            linebutton.configure(bg="white")
            recbutton.configure(bg="white")
            circlebutton.configure(bg="white")

def drawRec():
    # ve hinh chu nhat
    global action,recbutton,linebutton,circlebutton
    if addimg==1:
        if action !=2 :
            action =2
            linebutton.configure(bg="white")
            recbutton.configure(bg="gray")
            circlebutton.configure(bg="white")
        else:
            action=0
            linebutton.configure(bg="white")
            recbutton.configure(bg="white")
            circlebutton.configure(bg="white")


def drawCircle():
    #ve hinh tron
    global action,recbutton,linebutton,circlebutton
    if addimg==1:
        if action !=3 :
            action =3
            linebutton.configure(bg="white")
            recbutton.configure(bg="white")
            circlebutton.configure(bg="gray")
        else:
            action=0
            linebutton.configure(bg="white")
            recbutton.configure(bg="white")
            circlebutton.configure(bg="white")


def layToaDoClickChuot(event):
    # lay toa do an chuot 
    if action !=0:
        global toado_x,toado_y
        toado_x=event.x
        toado_y=event.y
        panelA.bind("<ButtonRelease>",layToaDoThaChuot)

def layToaDoThaChuot(event):
    # lay toa do tha chuot va ve hinh
    global img_num_arr,img_read,img_show,dc_x,dc_y
    if action ==1:#ve hinh theo hanh dong duoc chon truoc
        cv2.line(img_read, (toado_x-dc_x,toado_y-dc_y), (event.x-dc_x,event.y-dc_y), (0, 255, 0), 2)
    elif action ==2:
        cv2.rectangle(img_read, (toado_x-dc_x,toado_y-dc_y), (event.x-dc_x,event.y-dc_y), (0, 255, 0), 2)
    elif action ==3:
        cv2.circle(img_read, (toado_x-dc_x,toado_y-dc_y), tinhKC(toado_x-dc_x,toado_y-dc_y,event.x-dc_x,event.y-dc_y), (0, 255, 0), 2)
    img_num_arr = translate(img_read,dc_x,dc_y)
    img_show = cv2.cvtColor(img_num_arr, cv2.COLOR_BGR2RGB)
    img_show = Image.fromarray(img_show)
    img_show = ImageTk.PhotoImage(img_show)
    panelA.configure(image=img_show)
    panelA.image = img_show

root = tk.Tk()

toado_x=0 # toa do click chuot 
toado_y=0
panelA = None # frame chua anh
img_read = None #hinh anh doc tu file goc duoi dang number array
img_num_arr = None #hinh anh dung de xu li duoi dang number array
img_show = None   #Hinh anh da duoc convert ve Image
 
dc_x=0    # khoang cach dich chuyen theo truc x
dc_y=0      # khoang cach dich chuyen theo truc y
action =0   # 0: khong ve gi, 1: duong thang, 2: hinh chu nhat, 3:hinh tron 
addimg = 0  #0:anh chua duoc them vao, 1: hinh anh da duoc them vao Frame

canvas = tk.Canvas(root, height=700, width=700, background="#263D42")
canvas.pack()
#chua hinh anh
frameImage =tk.Frame(root,background="gray")
frameImage.place( height=500, width=600,x=50,y=175)

#chua cac nut dieu khien
frameHead=tk.Frame(root,background="#263D42")
frameHead.place( height=175, width=680,x=10,y=10)


#button chon hinh anh 
btn = tk.Button(root, text="Select image", command=addPicture)
btn.pack(side="bottom",  expand="yes", padx="10", pady="10")

#button save anh
btnsave = tk.Button(root)


#nut dieu khien 
topbutton = tk.Button(frameHead, text="^", fg="black",command=UpdateTop)
topbutton.place( height=30, width=30,x=112,y=20)

botbutton = tk.Button(frameHead, text="v", fg="black",command=UpdateBottom)
botbutton.place( height=30, width=30,x=112,y=84)

leftbutton = tk.Button(frameHead, text="<", fg="black",command=UpdateLeft)
leftbutton.place( height=30, width=30,x=80,y=52)

rightbutton = tk.Button(frameHead, text=">", fg="black",command=UpdateRight)
rightbutton.place( height=30, width=30,x=144,y=52)

linebutton = tk.Button(frameHead, text="Line", fg="black",bg="white",command=drawLine)
linebutton.place( height=30, width=60,x=300,y=52)

recbutton = tk.Button(frameHead, text="Rectangle", fg="black",bg="white",command=drawRec)
recbutton.place( height=30, width=60,x=400,y=52)

circlebutton = tk.Button(frameHead, text="Cricle", fg="black",bg="white",command=drawCircle)
circlebutton.place( height=30, width=60,x=500,y=52)

# khoi tao panel va nghe su kien click chuot
panelA = tk.Label(frameImage)
panelA.bind("<Button-1>",layToaDoClickChuot)



root.mainloop()