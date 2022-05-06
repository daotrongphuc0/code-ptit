s1 =input()
td1 ={}
for i in range(3):
    tmp = input()
    tmp = tmp.split(":")
    td1[tmp[0]] = tmp[1]
s2 =input()
td2={}
for i in range(3):
    tmp = input()
    tmp = tmp.split(":")
    trung  = False
    for keytd1 in td1.keys() :
        if keytd1 == tmp[0]:
            trung = True
            break
    if not trung : 
        td2[tmp[0]] = tmp[1]
print(s1)
for key,value in td1.items() : 
    print(f"{key} : {value}")
print(s2)
for key, value in td2.items():
    print(f"{key} : {value}")
