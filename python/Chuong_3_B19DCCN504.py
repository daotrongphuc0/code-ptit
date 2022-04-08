#3.1
names =["Phuc", "Hai", "Nam", "Hung", "Thanh"]
for name in names:
    print(name.title())
#3.2
for name in names:
    if(name == "Hung") :
        print(f"{name.title()} là bạn thân của tôi")
    else:
        print(f"Xin chào {name.title()}")
#3.3
phuongtien = ["xe may","xe bus","o to","xe dap"]
for i in phuongtien :
    print(f"toi thich di bang {i}")
#3.4
nguoi = ["Hoa","Trang","Huong"]
for i in nguoi :
    print(f"{i} co  the di an toi voi minh duoc khong ?")
#3.5
khachhang = ["Hoa","Trang","Huong"]
khachhang[1] = "Thao"
khachhang.append("Phuong")
print("khach khong the tham gia :")
print(khachhang)
for i in khachhang :
    print(f"{i}, ban an toi vs toi chu ?")
#3.6
khachhang.insert(0,"Thuong")
khachhang.insert(3,"Thanh")
khachhang.append("Quynh")
for i in khachhang :
    print(f"{i}, ban an toi vs toi chu ?")
#3.7
print ("toi chi co the moi dc 2 vi khach ")
while len(khachhang) > 2 :
    khachhang.pop()
for i in khachhang :
    print(f"{i}, ban da duoc moi")
del khachhang[1]
del khachhang[0]
print(khachhang)
#3.8
diadiem = ["Tokyo", "Da Nang","Thai Binh"]
print(diadiem)
for i in sorted(diadiem) :
    print(f"{i}   ")
diadiem.reverse()
for i in sorted(diadiem) :
    print(f"{i}   ")
#3.9
print(len(diadiem))
#3.10
river0 = ['Sông Hồng','Sông Nile','Sông Hoàng Hà','Sông Cửu Long','Sông Đà']
river0.pop()
river0.append("Song Hoa")
del river0[0]
river0.reverse()
#3.11
pizzas = ["pizza ga","pizza nam","pizza hai san"]
for pizza in pizzas :
    print(f"toi thich an {pizza}")
print("toi thuc su rat thich pizza")
#3.12
animals = ['cho','meo','lon','ga']
for animal in animals:
    print(f"{animal} rat dang yeu")
print("tat ca dong vat deu tuyet voi")
#3.13
for i in range(1,21) :
    print(f'{i} ')
#3.14
numbers =[]
for i in range(1,1000001) :
    numbers.append(i)
#3.15
if numbers[0] == min(numbers) :
    print('lish bat dau tu 1')
if numbers[999999] == max(numbers) :
    print('lish ket thuc o 1000000')
print(sum(numbers))
#3.16
for i in range(1,21,2) :
    print(f"{i} ")
#3.17
for i in range(3,31,3) :
    print(f"{i} ")
#3.18
for i in range(1,10) :
    print(f"{i**3} ")
#3.19
lishlappuong = [i**3 for i in range(1,11)]
print(lishlappuong)
#3.20
for pizza in pizzas[:3] :
    print(f"{pizza}     ")
#3.21
friend_pizzas = pizzas[:]
pizzas.append("pizza trung")
friend_pizzas.append("pizza xuc xich")
print("My favorite pizzas are:")
print(pizzas)
print("My friend’s favorite pizzas are:")
print(friend_pizzas)
#3.22
foods =['xoi','pho','che','bun']
print(foods)
for food in foods:
    print(food)
#3.23
typefood = ('hai san','ga','bo','heo','tom')
for i in typefood :
    print(i)
# typefood[1] = "tho rung"
