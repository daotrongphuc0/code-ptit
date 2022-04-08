
#4.1
car = 'audi'
print("is car == audi. true")
print("is car == bmv. false")
a = 1
print("is a == 2 .false")
print("is a == 1. true")
a = 2
print("is a == 3 .false")
print("is a == 2. true")
a = 3
print("is a == 4 .false")
print("is a == 3. true")
a = 4
print("is a == 5 .false")
print("is a == 4. true")
a = 5
print("is a == 6 .false")
print("is a == 5. true")
a = 6
print("is a == 7 .false")
print("is a == 6 true")
a = 7
print("is a == 8 .false")
print("is a == 7. true")
a = 8
print("is a == 9 .false")
print("is a == 8. true")
#4.2
name = "Phuc"
if (name == "Phuc"):
	print("True")
else:
	print("False")

if (name == "Phuc"):
	print(name.lower())
else:
	print (name)
a =4
if(a == 4):
	print("True")
if(a>0):
	print("True")
if(a<0):
	print("False")
if(a!= 0):
	print("True")
b = 5
if (a==4 or b == 4):
	print("true")
names = ["Phuc","Hung"]
name = "Phuc"
name1="Hai"
if name in names:
	print("true")
if name1 not in names:
	print("false")
#4.3
alien_color = ["green","yellow","red"]
color = "green"
color1="yellow"
color2="red"
if color in alien_color :
	print("ban nhan duoc 5 diem")
if color not in alien_color:
	print()
#4.4
if color in alien_color:
 	print("ban nhan duoc 5 diem")
if color1 in alien_color:
 	print("ban nhan duoc 10 diem")
if color2 in alien_color:
	print("ban nhan duoc 10 diem")
if color in alien_color:
	print("ban nhan duoc 5 diem")	
else:
	print("ban nhan duoc 10 diem")
#4.5
if color in alien_color:
	print("ban nhan duoc 5 diem khi ban quai vat xanh")
elif color1 in alien_color:
	print("ban nhan duoc 10 diem khi ban quai vat vang")
else:
	print("ban nhan duoc 10 diem khi ban quai vat do")
#4.6
age = 20
if(age < 2):
	print('baby')
elif (age <= 4):
	print("toddler")
elif (age <= 13):
	print("kid")
elif(age <= 20):
	print("teen")
elif(age <= 65):
	print("adult")
else:
	print("elder")
#4.7
favorit_fruits = {"soai","dua","nho"}
if "chuoi" in favorit_fruits:
	print("toi thich chuoi")
if "soai" in favorit_fruits:
	print("toi thich soai")
if "nho" in favorit_fruits:
	print("toi thich nho")
if "dua" in favorit_fruits:
	print("toi thich dua")
if "na" in favorit_fruits:
	print("toi thich na")

#4.8

user={"Phuc","Nam","Hoang","Duy"}
admin = "Phuc"
dangnhap = 'Nam'
if dangnhap == admin:
	print("chao admin")
if dangnhap in user:
	print(f"chao {dangnhap}")
#4.9
if dangnhap == "":
	print ("no user")
#4.10
current_users = ["phuc","tien","hoang",]
current_users1=["PHUC","TIEN","HOANG",]
newuser=["thai", "thuc"]
k = len(newuser) 
for i in range (0,k):
	a = newuser[i]
	if a in current_users or a in current_users1:
		print("ten bi trung")
#4.11
number = [1,2,3,4,5,6,7,8,9]
for i in range(0,9):
	if (i == 0):
		print("1st")
	elif i ==1 :
		print("2nd")
	elif i == 2:
		print("3rd")
	else:
		print(f"{number[i]}th")