n =int(input())
for t in range(0,n):
    s =input().lower()
    kq=""
    solan =0
    toado =0
    vitri =0
    for i in s:

        if i == "t" :
            solan+=1
            vitri =toado
            if solan ==1 :
                kq+= f"{vitri}"
            elif solan ==2 :
                kq += f" {vitri}"
        toado +=1
    if solan >= 2 :
        kq+= f" {vitri}"
    if solan > 0 :
        print(kq)
    else :
        print("-1")
            
