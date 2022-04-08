#Nguyen Hoang Anh
#MSSV: 
#sdt: 

#remove dấu chữ cái tiếng Việt (cho phần email)
import re 
def no_accent_vietnamese(s):
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

LUONG_CO_SO=1.49
HE_SO_LUONG=2.34

def tinh_tuoi_B17DCCN123(namsinh):
	return 2021-namsinh

def get_email_B17DCCN123(hoTen):
	l_hoten=hoTen.split()
	so_tu=len(l_hoten)
	hauto=''
	for i in range(so_tu-1):
		hauto=hauto+l_hoten[i][0]
	mail=no_accent_vietnamese(l_hoten[-1])+hauto+'@gmail.com'
	return mail.lower()

def tinh_thang_B17DCCN123(nam,thang):
	thang_lam_viec=(2021-nam)*12+12-thang
	return thang_lam_viec

def he_so(so_thang_lv):
	'''Hàm tính hệ số dựa theo số tháng làm việc. Để tính lương'''
	num=(so_thang_lv-12)//36
	he_so=HE_SO_LUONG+0.33*(num)
	return he_so

def tinh_luong_B17DCCN123(nam,thang):
	so_thang_lv=tinh_thang_B17DCCN123(nam,thang)
	luong_linh=0
	if (so_thang_lv<=12):
		luong_linh=LUONG_CO_SO*0.85*HE_SO_LUONG
	elif so_thang_lv<=48:
		luong_linh=LUONG_CO_SO*HE_SO_LUONG
	else:
		luong_linh=he_so(so_thang_lv)*LUONG_CO_SO
	return(luong_linh)

def tinh_thuong_B17DCCN123(so_thang,htnv):
	''' ham tinh thuong
	htnv: hoàn thành nhiệm vụ với các quy ước
	0: khong hoan thanh
	1: hoan thanh
	2: hoan thanh tot
	3: hoan thanh xuat sac nhiem vu'''
	luong_linh=0
	if (so_thang<=12):
		luong_linh=LUONG_CO_SO*0.85*HE_SO_LUONG
	elif so_thang<=48:
		luong_linh=LUONG_CO_SO*HE_SO_LUONG
	else:
		luong_linh=he_so(so_thang)*LUONG_CO_SO
	thuong=0
	if htnv==0:
		he_so_thuong=0.8
	elif htnv==1:
		he_so_thuong=1
	elif htnv==2:
		he_so_thuong=1.2
	elif htnv==3:
		he_so_thuong=1.5
	return luong_linh*he_so_thuong

#in thu ket qua mot so ham
#tuoi
print(tinh_tuoi_B17DCCN123(1984))
#email
print(get_email_B17DCCN123('Nguyen Hoang Anh'))
#tinh thang
print(tinh_thang_B17DCCN123(2008,10))
#tinh he so
print(he_so(158))
# tinh luong
print(tinh_luong_B17DCCN123(2008,10))
#thuong (truong hop hoan thanh tot nhiem vu)
print(tinh_thuong_B17DCCN123(158,2))


class Hopdong_NguyenHoang:
	'''Class Hop Dong'''
	def __init__(self,thang,nam,loai=0):
		self.thang=thang
		self.nam=nam
		self.loai=loai


class VienChuc_Anh:
	'''Class mo ta Vien Chuc'''
	def __init__(self, hoten, namsinh,gioitinh,hopdong,hoanthanh):
		self.hoten=hoten 
		self.email=get_email_B17DCCN123(hoten)
		self.namsinh=namsinh
		self.tuoi=tinh_tuoi_B17DCCN123(namsinh)
		self.gioitinh=gioitinh
		self.hopdong=hopdong
		self.hoanthanh=hoanthanh
		self.luong=tinh_luong_B17DCCN123(hopdong.nam,hopdong.thang)
		self.so_thang_lv=tinh_thang_B17DCCN123(hopdong.nam,hopdong.thang)
		self.thuong=tinh_thuong_B17DCCN123(self.so_thang_lv,hoanthanh)

#Câu 1
vc1=VienChuc_Anh('Nguyen Hoang Anh',1984,'Nam',Hopdong_NguyenHoang(10,2008),1)
vc2=VienChuc_Anh('Nguyen Hoang Minh',1994,'Nam',Hopdong_NguyenHoang(10,2010),0)
vc3=VienChuc_Anh('Le Hoang Anh',1988,'Nam',Hopdong_NguyenHoang(10,2018),2)
vc4=VienChuc_Anh('Tran Hoang Anh',1987,'Nam',Hopdong_NguyenHoang(8,2017),3)
vc5=VienChuc_Anh('Nguyen Viet Hoang',1984,'Nam',Hopdong_NguyenHoang(10,2008),1)
vc6=VienChuc_Anh('Nguyen Hoang Giang',1989,'Nữ',Hopdong_NguyenHoang(10,2008),1)
vc7=VienChuc_Anh('Nguyen Minh Ánh',1999,'Nữ',Hopdong_NguyenHoang(10,2020),2)
vc8=VienChuc_Anh('Hoàng Minh Ánh',1996,'Nữ',Hopdong_NguyenHoang(10,2021),0)
vc9=VienChuc_Anh('Nguyễn Thị Huyền',1995,'Nữ',Hopdong_NguyenHoang(10,2017),3)
vc10=VienChuc_Anh('Nguyễn Thị Thu Hương',1994,'Nữ',Hopdong_NguyenHoang(6,2014),2)

list_vc=[vc1,vc2,vc3,vc4,vc5,vc6,vc7,vc8,vc9,vc10]

print('Cau 2:')
newlist = sorted(list_vc, key=lambda x: x.tuoi, reverse=True)
for item in newlist:
	info =item.hoten+'		'+item.email+'		'+str(item.tuoi)
	print(info)

print('Cau 3:')
for item in list_vc:
	info=item.hoten+'		'+str(item.tuoi)+'		'+str(item.so_thang_lv)+'		'+str(item.hopdong.loai)
	print(info)

print('Cau 4:')
list_nam=list(filter(lambda x: x.gioitinh=='Nam',list_vc))
list_nu=list(filter(lambda x: x.gioitinh=='Nữ',list_vc))
list_nam_sort=sorted(list_nam, key=lambda x: x.luong, reverse=False)
list_nu_sort=sorted(list_nu, key=lambda x: x.luong, reverse=False)
# in ca hai danh sach
for item in (list_nam_sort+list_nu_sort):
	info=item.hoten+'		'+str(item.tuoi)+'		'+str(item.luong)
	print(info)

print('Cau 5:')
list_thuong=sorted(list_vc, key=lambda x: x.thuong, reverse=True)
for item in list_thuong[0:5]:
	info=item.hoten+'		'+str(item.namsinh)+'		'+item.gioitinh+'		'+str(item.thuong)
	print(info)











