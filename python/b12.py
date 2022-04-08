s = input()
kq1 = ""
kq2 = ""
kq3 = ""
for i in s:
    if i>= '0' and i<= '9' :
        kq1 += i
        kq2 += i
    if (i>= 'A' and i<= 'Z') or (i>= 'a' and i<= 'z') or i == " ":
        kq2 += i
list1 = kq2.split()
list2 = s.split(" - ")
kq4 = ""
for j in list1 :
    kq4 += j
    kq4 +=" "
for j in list2:
    kq3 += j
    kq3 += " "
print("1. "+kq1)
print("2. "+kq4)
print("3. "+kq3)
