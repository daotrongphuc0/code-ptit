s1 = input()
s2 = input()
l1 = len(s1)
kq1 = s1[:int(l1/2):1] + s2 + s1[int(l1/2)::1]
print(kq1)
list1 = []
list2 = []
tmp =""
for i in s1:
    if   not(i>= 'A' and i<= 'Z') :
        tmp += i
    else :
        list1.append(tmp)
        tmp =i
list1.append(tmp)
for i in s2:
    if   not(i>= 'A' and i<= 'Z') :
        tmp += i
    else :
        list2.append(tmp)
        tmp =i
list2.append(tmp)
print("1."+list1[2] + " " + list2[2])
print("2."+kq1)
# cau 3
print("3."+s1[0] + s2[0] + s1[-1] + s2[-1])
# cau 4 5
list3 = ["","","",""]
list4 = ["","","",""]
kitu=0
so =0
khac =0
for i in s1 :
    if   (i>= 'A' and i<= 'Z') :
        list3[1] +=i
        kitu +=1
    elif i>= 'a' and i<= 'z' :
        list3[0] +=i
        kitu +=1
    elif i>= '1' and i<= '9' :
        list3[2] +=i
        so +=1
    else:
        list3[3] +=i
        khac+=1
kq5 = str(kitu)+" "+str(so)+" "+str(khac)+ " "
kitu = 0
so = 0
khac = 0
for i in s2 :
    if   (i>= 'A' and i<= 'Z') :
        list4[1] +=i
        kitu += 1
    elif i>= 'a' and i<= 'z' :
        list4[0] +=i
        kitu += 1
    elif i>= '1' and i<= '9' :
        list4[2] +=i
        so +=1
    else:
        list4[3] +=i
        khac +=1
print("4." + list3[0]+list3[1]+list3[2]+list3[3]+" "+list4[0]+list4[1]+list4[2]+list4[3])
print("5. " + kq5+ str(kitu)+" "+str(so)+" " + str(khac))