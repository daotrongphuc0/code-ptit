


m = [int(x) for x in input().split()]
ds ={}
while m[0] >0:
    tmp = input().split()
    ds[tmp[0]] = tmp[1]
    m[0] -=1
diem0 =[]
diem1 =[]
diem2 =[]
diem3 =[]
diem4 =[]
diem5 =[]
diem6 =[]
diem7 =[]
diem8 =[]
diem9 =[]
diem10 =[]
for i in ds.keys() :
    if ds[i] == 0:
        diem0.append(i)
    elif ds[i] == 1:
        diem1.append(i)
    elif ds[i] == 2:
        diem2.append(i)
    elif ds[i] == 3:
        diem3.append(i)
    elif ds[i] == 4:
        diem4.append(i)
    elif ds[i] == 5:
        diem5.append(i)
    elif ds[i] == 6:
        diem6.append(i)
    elif ds[i] == 7:
        diem7.append(i)
    elif ds[i] == 8:
        diem8.append(i)
    elif ds[i] == 9:
        diem9.append(i)
    else :
        diem10.append(i)
diem0.sort()
diem1.sort()
diem2.sort()
diem3.sort()
diem4.sort()
diem5.sort()
diem6.sort()
diem7.sort()
diem8.sort()
diem9.sort()
diem10.sort()
ketqua = []
diem = [diem0,diem1,diem2,diem3,diem4,diem5,diem6,diem7,diem8,diem9,diem10]
for i in range(10,-1,-1) :
    print(diem[i])
    # if m[1] <1 :
    #     break
    # if m[1] >= len(diem[i]) :
    #     ketqua.append(diem[i])
    #     m[1-len(diem[i])]
    # else:
    #     tmp1 = diem[i][0:m[1]]
    #     ketqua.append(diem[i])
#print(ketqua)