#name : Đào Trọng Phúc 
#Mã sv: B19DCCN504
import re

# câu 1:
def xoadau(s):
    s = re.sub('[áàảãạăắằẳẵặâấầẩẫậ]', 'a', s)
    s = re.sub('[ÁÀẢÃẠĂẮẰẲẴẶÂẤẦẨẪẬ]', 'A', s)
    s = re.sub('[éèẻẽẹêếềểễệ]', 'e', s)
    s = re.sub('[ÉÈẺẼẸÊẾỀỂỄỆ]', 'E', s)
    s = re.sub('[óòỏõọôốồổỗộơớờởỡợ]', 'o', s)
    s = re.sub('[ÓÒỎÕỌÔỐỒỔỖỘƠỚỜỞỠỢ]', 'O', s)
    s = re.sub('[íìỉĩị]', 'i', s)
    s = re.sub('[ÍÌỈĨỊ]', 'I', s)
    s = re.sub('[úùủũụưứừửữự]', 'u', s)
    s = re.sub('[ÚÙỦŨỤƯỨỪỬỮỰ]', 'U', s)
    s = re.sub('[ýỳỷỹỵ]', 'y', s)
    s = re.sub('[ÝỲỶỸỴ]', 'Y', s)
    s = re.sub('đ', 'd', s)
    s = re.sub('Đ', 'D', s)
    return s
def get_months_B19DCCN504(stringBirthDay) :
    l_stringBirthDay = stringBirthDay.split("/")
    return int(l_stringBirthDay[1])
def get_user_months_daotrongphuc(string) :
    l_string = string.split("/")
    thanglamviec =(2022-int(l_string[2]))*12 + 1 - int(l_string[1])
    return thanglamviec
def B19DCCN504_get_username(stringName,stringBirthDay):
    l_stringBirthDay = stringBirthDay.split("/")
    l_stringName = stringName.split()
    do_dai = len(l_stringName)
    duoi= ''
    for i in range(do_dai-1) :
        duoi = duoi + l_stringName[i][0]
    ketqua = xoadau(l_stringName[-1]) + duoi + l_stringBirthDay[0]+l_stringBirthDay[1]
    return ketqua.lower()

# câu 2
class KhachHang_B19DCCN504 :
    def __init__(self,makh,tenkh,ngaysinh,ngaydangki,dichvu) :
        self.makh = makh
        self.tenkh = tenkh
        self.ngaysinh = ngaysinh
        self.ngaydangki = ngaydangki
        self.username = B19DCCN504_get_username(tenkh,ngaysinh)
        self.dichvu =dichvu




class DichVu_B19DCCN504 :
    def __init__(self,madv,goidv,giacuoc):
        self.madv = madv
        self.goidv= goidv 
        self.giacuoc = giacuoc
    def get_goiDV(self) :
        return self.goidv

dv1 = DichVu_B19DCCN504('001','Dong',500000)
dv2 = DichVu_B19DCCN504('002','Bac',1000000)
dv3 = DichVu_B19DCCN504('003','Vang',2000000)
dv4 = DichVu_B19DCCN504('004','Kim cuong',3000000)
list_dv = [dv1,dv2,dv3,dv4]






kh1 = KhachHang_B19DCCN504('kh001','Dao Trong Phuc','26/10/2001','23/9/2020',list_dv[3])
kh2 = KhachHang_B19DCCN504('kh002','Nguyen The Hao','12/11/2001','10/3/2019',list_dv[3])
kh3 = KhachHang_B19DCCN504('kh003','Le Tat Tu','23/09/2001','11/6/2021',list_dv[0])
kh4 = KhachHang_B19DCCN504('kh004','Nguyen Gia Hung','30/10/2001','30/10/2020',list_dv[1])
kh5 = KhachHang_B19DCCN504('kh005','Lam Thu thao','12/07/2001','20/5/2021',list_dv[2])
 
list_kh = [kh1,kh2,kh3,kh4,kh5]
# cau 2.a
for kh in list_kh :  
    print(kh.tenkh +'   '+ kh.username+'   '+ kh.dichvu.get_goiDV())
print("\n\n\n")



# cau 2.b
for kh in list_kh :
    if get_months_B19DCCN504(kh.ngaysinh) == 9 :
        print(kh.tenkh +'   '+ kh.username+'   '+ kh.dichvu.get_goiDV())
print("\n\n\n")


 # cau 2.c
for kh in list_kh :
    if get_user_months_daotrongphuc(kh.ngaydangki) >12 :
        print(kh.tenkh +'   '+ kh.username+'   '+ kh.dichvu.get_goiDV())
# cau 2.d
