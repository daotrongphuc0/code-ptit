s1 = input()
s2 = input()
s1 =s1.replace(" ","")
s2 =s2.replace(" ","")
ok = True
for i in s1:
    if(s2.find(i) != -1):
        s2 = s2.replace(i, "", 1)
    else:
        ok = False
        break
if len(s2) != 0 :
    ok =False
if ok:
    print("true")
else :
    print("false")
        