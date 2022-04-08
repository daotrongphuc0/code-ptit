#nguyen Hoang Anh
#B17DCCN123
#0936461828
#anhnh@ptit.edu.vn

import random 

import re 
# hàm từ Internet, mục đính bỏ dấu chữ tiếng Việt, sử dụng thư viện re. Có thể thay thế hàm này bằng sử dụng thư viện unicode
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

def tinh_tuoi_B17DCCN123(namsinh):
	return 2021-namsinh

def sinh_ma_tinh_B17DCCN123(tenTinh,dictTinh):
	for key,value in dictTinh.items():
		if value==tenTinh:
			return key

def sinh_ma_gioi_tinh_B17DCCN123(namsinh,gioitinh):
    ma_gioi_tinh=0 
    if 1900<=namsinh<=1999 and gioitinh==1:#Nam
        ma_gioi_tinh=0
    if 1900<=namsinh<=1999 and gioitinh==0:
        ma_gioi_tinh=1
    if 2000<=namsinh<=2099 and gioitinh==1:#Nam
        ma_gioi_tinh=2
    if 2000<=namsinh<=2099 and gioitinh==0:
        ma_gioi_tinh=3
    if 2100<=namsinh<=2199 and gioitinh==1:#Nam
        ma_gioi_tinh=4
    if 2100<=namsinh<=2199 and gioitinh==0:
        ma_gioi_tinh=5
    if 2200<=namsinh<=2299 and gioitinh==1:#Nam
        ma_gioi_tinh=6
    if 2200<=namsinh<=2299 and gioitinh==0:
        ma_gioi_tinh=7
    if 2300<=namsinh<=2399 and gioitinh==1:#Nam
        ma_gioi_tinh=8
    if 2300<=namsinh<=2399 and gioitinh==0:
        ma_gioi_tinh=9
    return ma_gioi_tinh

def sinh_email_B17DCCN123(hoTen):
    l_hoten=hoTen.split()
    so_tu=len(l_hoten)
    hauto=''
    for i in range(so_tu-1):
        hauto=hauto+l_hoten[i][0]
    mail=no_accent_vietnamese(l_hoten[-1])+hauto+'@gmail.com'
    return mail.lower()

class Fullname_HaNoi:
    def __init__(self,ho,dem,ten):
        self.ten=ten 
        self.ho=ho
        self.dem=dem 

class CongDan_HoangAnh:
    def __init__(self,hoten,namsinh,gioitinh,quequan):
        self.hoten=hoten
        self.namsinh=namsinh
        self.gioitinh=gioitinh
        self.fullname=hoten.ho+' '+hoten.dem+' '+hoten.ten
        self.tuoi=tinh_tuoi_B17DCCN123(namsinh)
        self.email=sinh_email_B17DCCN123(self.fullname)
        self.quequan=quequan

# Câu 1
dictTinh={'001':'Hà Nội','008':'Tuyên Quang','004':'Cao Bằng','019':'Thái Nguyên','020':'Lạng Sơn','022':'Quảng Ninh','026':'Vĩnh Phúc','031':'Hải Phòng'}

# Câu 2
cd1=CongDan_HoangAnh(Fullname_HaNoi('Nguyen','Trần','Anh'),1984,'Nam','Hà Nội')
cd2=CongDan_HoangAnh(Fullname_HaNoi('Nguyen','Hoang','Bách'),1986,'Nam','Thái Nguyên')
cd3=CongDan_HoangAnh(Fullname_HaNoi('Nguyen','Minh','Anh'),1988,'nữ','Hải Phòng')
cd4=CongDan_HoangAnh(Fullname_HaNoi('Nguyen','Hoang','Giang'),2004,'Nam','Lạng Sơn')
cd5=CongDan_HoangAnh(Fullname_HaNoi('Võ','Hoang','Anh'),2005,'Nữ','Hà Nội')
cd6=CongDan_HoangAnh(Fullname_HaNoi('Nguyen','Linh','Anh'),2011,'Nữ','Hải Phòng')
cd7=CongDan_HoangAnh(Fullname_HaNoi('Nguyen','Lê','Anh'),1995,'Nam','Quảng Ninh')
cd8=CongDan_HoangAnh(Fullname_HaNoi('Lê','Quang','Anh'),1996,'Nam','Cao Bằng')
cd9=CongDan_HoangAnh(Fullname_HaNoi('Trần','Hoàng','Minh'),1999,'Nam','Tuyên Quang')
cd10=CongDan_HoangAnh(Fullname_HaNoi('Vũ','Hoang','Việt'),2000,'Nam','Vĩnh Phúc')

#Câu 3
print('Câu 3:')
list_cd=[cd1,cd2,cd3,cd4,cd5,cd6,cd7,cd8,cd9,cd10]
for item in list_cd:
    info=item.fullname+'        '+item.gioitinh+'   '+str(item.tuoi)+'  '+item.quequan+'    '+item.email
    print(info)

#Cau 4
print('Câu 4:')
#random items from list
list_copy=list_cd[:]
list_random=[]
for i in range(5):
    cdx=random.choice(list_copy)
    list_random.append(cdx)
    list_copy.remove(cdx)
# sinh mã căn cước công dân
def sinh_ma_can_cuoc(congdan):
    ma_tinh=sinh_ma_tinh_B17DCCN123(congdan.quequan,dictTinh)
    code_gioi_tinh=0#mac dinh la Nu
    if congdan.gioitinh=='Nam':
        code_gioi_tinh=1
    ma_gioi_tinh=sinh_ma_gioi_tinh_B17DCCN123(congdan.namsinh,code_gioi_tinh)
    ma_nam_sinh=str(congdan.namsinh)[-2:]
    so_ngau_nhien=random.randint(100000,999999)
    ma_can_cuoc=str(ma_tinh)+str(ma_gioi_tinh)+str(ma_nam_sinh)+str(so_ngau_nhien)
    return ma_can_cuoc
#in kết quả
for item in list_random:
    info = item.fullname+'  '+str(item.namsinh)+'   '+item.quequan+'    '+sinh_ma_can_cuoc(item)
    print(info)

#Câu 5
def doc_cccd_HoangAnh(cccd):
    matinh=cccd[:3]
    ma_gioi_tinh=cccd[3]
    ma_nam_sinh=cccd[4:6]
    so_ngau_nhien=cccd[6:]
    #
    tenTinh=''
    for key,value in dictTinh.items():
        if key==matinh:
            tenTinh=value
    prefix=''
    gioitinh=''
    if ma_gioi_tinh=='0':
        prefix=19
        gioitinh='Nam'
    elif ma_gioi_tinh=='1':
        prefix='19'
        gioitinh='Nữ'
    elif ma_gioi_tinh=='2':
        prefix='20'
        gioitinh='Nam'        
    elif ma_gioi_tinh=='3':
        prefix='20'
        gioitinh='Nữ'   
    elif ma_gioi_tinh=='4':
        prefix='21'
        gioitinh='Nam'
    elif ma_gioi_tinh=='5':
        prefix='21'
        gioitinh='Nữ'      
    elif ma_gioi_tinh=='6':
        prefix='22'
        gioitinh='Nam'
    elif ma_gioi_tinh=='7':
        prefix='22'
        gioitinh='Nữ'   
    elif ma_gioi_tinh=='8':
        prefix='23'
        gioitinh='Nam' 
    elif ma_gioi_tinh=='9':
        prefix='23'
        gioitinh='Nữ'     
    namsinh=str(prefix)+str(ma_nam_sinh)
    print(f'Giải mã Căn cước: {cccd}')
    print(tenTinh)
    print(gioitinh)
    print(namsinh)
    print(so_ngau_nhien)
print('Câu 5')
doc_cccd_HoangAnh('001084011351')





