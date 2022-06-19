import tkinter as tk
from tkinter import   BOTTOM, END, LEFT, TOP, filedialog
from PIL import ImageTk, Image
import cv2
from cv2 import sqrt
import numpy as np
def tinhKC(a,b,c,d):
    x=sqrt((a-c)**2+(b-d)**2)
    return int(x[0])
def translate(image, x, y):
    M = np.float32([[1, 0, x], [0, 1, y]])
    shifted = cv2.warpAffine(image, M, (image.shape[1], image.shape[0]))
    return shifted

def UpdateTop():
    if addimg==1:
        global dc_y
        dc_y-=10
        imageUpdate()

def UpdateBottom():
    if addimg==1:
        global dc_y
        dc_y+=10
        imageUpdate()

def UpdateLeft():
    if addimg==1:
        global dc_x
        dc_x-=10
        imageUpdate()

def UpdateRight():
    if addimg==1:
        global dc_x
        dc_x+=10
        imageUpdate()

def imageUpdate():
    global img_num_arr,img_read,img_show,dc_x,dc_y
    if panelA!=None :
        img_num_arr= translate(img_read,dc_x,dc_y)
        img_show = cv2.cvtColor(img_num_arr, cv2.COLOR_BGR2RGB)
        img_show = Image.fromarray(img_show)
        img_show = ImageTk.PhotoImage(img_show)
        panelA.configure(image=img_show)
        panelA.image = img_show

def addPicture():
    global panelA,img_read,dc_x,dc_y,img_num_arr,img_show
    path = filedialog.askopenfilename()

    if len(path) > 0:
        global addimg
        dc_x=0
        dc_y=0
        img_read = cv2.imread(path)
        if img_read.shape[1]>600 or img_read.shape[0]>500:
            img_read = cv2.resize(src=img_read, dsize=(min(img_read.shape[1],600), min(img_read.shape[0],500)))
        img_num_arr = translate(img_read,dc_x,dc_y)
        img_show = cv2.cvtColor(img_num_arr, cv2.COLOR_BGR2RGB)
        img_show = Image.fromarray(img_show)
        img_show = ImageTk.PhotoImage(img_show)
        addimg =1
        if panelA is None:
            panelA = tk.Label(frameImage,image=img_show)
            panelA.image = img_show
            panelA.place(x=0,y=0)   

        else:
			# update the pannels
            panelA.configure(image=img_show)
            panelA.image = img_show
            panelA.place(x=0,y=0)


def drawLine():
    global action,recbutton,linebutton,circlebutton
    if addimg==1:
        if action !=1 :
            action =1
            linebutton.configure(bg="gray")
            recbutton.configure(bg="white")
            circlebutton.configure(bg="white")
        else:
            action=0
            linebutton.configure(bg="white")
            recbutton.configure(bg="white")
            circlebutton.configure(bg="white")

def drawRec():
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


def dosomething(event):
    if action !=0:
        global toado_x,toado_y
        toado_x=event.x
        toado_y=event.y
        panelA.bind("<ButtonRelease>",dosomething1)

def dosomething1(event):
    global img_num_arr,img_read,img_show,dc_x,dc_y
    if action ==1:
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



toado_x =0
toado_y=0
panelA = None
img_num_arr = None
img_show = None
img_read = None
dc_x=0
dc_y=0
action =0
addimg = 0

canvas = tk.Canvas(root, height=700, width=700, background="#263D42")
canvas.pack()

frameImage =tk.Frame(root,background="gray")
# frame.place(relwidth=0.75, relheight= 0.7,relx=0.1,rely=0.1)
frameImage.place( height=500, width=600,x=50,y=175)


frameHead=tk.Frame(root,background="#263D42")
# frame.place(relwidth=0.75, relheight= 0.7,relx=0.1,rely=0.1)
frameHead.place( height=175, width=680,x=10,y=10)




# openFile = tk.Button(root,text="Open file",padx=10,pady=5,fg='black',bg="white", command=addPicture)
# openFile.pack(pady=10)
btn = tk.Button(root, text="Select image", command=addPicture)
btn.pack(side="bottom",  expand="yes", padx="10", pady="10")


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

#circlebutton.config(bg=)
#frameImage.bind("<Button-1>",dosomething)
# frameImage.bind("<ButtonRelase>",dosomething1)
panelA = tk.Label(frameImage)
panelA.bind("<Button-1>",dosomething)



root.mainloop()