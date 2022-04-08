bien_xd = True
try :
    n = int(input())
except ValueError:
    print("IVALID INPUT")
    bien_xd =False
if bien_xd :
    m  = {}
    for t in range(0,n) :
        tmp = input().split()
        m[tmp[0]] = tmp[1]
    tong =0
    tich =1
    xd =False
    for i in m.values() :
        try:
            x = int(i)
            xd = True
            tong += x
            tich *= x
        except ValueError:
            continue
    if xd  == False:
        tich =0
    print(f"{tong} {tich}")
        