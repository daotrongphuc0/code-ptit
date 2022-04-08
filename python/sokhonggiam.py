n =int(input())
while n>0 :
    so = input()
    ok = True
    for id in range(1,len(so)) :
        if so[id-1] > so[id] :
            ok = False
            break
    if ok :
        print("YES")
    else :
        print("NO")
    n-=1