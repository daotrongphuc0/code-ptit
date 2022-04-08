# Đào Trọng Phúc B19dccn504 
# daotrongphuc50204002@gmail.com
# 0963991723
from Hopdong.py import Hopdong
class Vienchuc:
    def __init__(self,name,namsinh,gt,email,hopdong,htnv):
        self.name = name
        self.namsinh = int(namsinh)
        self.gt = gt
        self.email =email
        self.hopdong = Hopdong(hopdong)
        self.htnv =htnv
    def get_email(self,name) :
        n = self.name.rstrip()
        m = n.split()
        kq = ""
        kq= n[len(n)-1]
        for a in range(len(n)-1):
            kq += a[0]
        kq+="@gmail.com"
        return kq
    def tinh_tuoi(self,namsinh) :
        return 2021- namsinh
    def tinh_thang(self,t,n):
        kq = 0;
        kq+= 12 - t
        kq+= 12*(2021-n)
        return kq
    def tinh_luong(self,t,n) :
        hesoluong =2,34
        sothang =tinhthang(t,n)
        while(sothang>36) :
            hesoluong *= 1.33
            sothang -= 36
        if tinhthang(t,n) < 12:
            return 0.85*hesoluong*1490000
        else:
                return hesoluong*1490000
    