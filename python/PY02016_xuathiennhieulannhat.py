t = int(input())
while t>0:
    m = int(input())
    n = [int(x) for x in input().split()]
    n.append(1000001)
    n.sort()
    gtmax =-1
    dem=1
    gtri =-1
    for i in range(0,m) :
        if(n[i] == n[i+1]) : dem +=1
        else:
            if dem > gtmax :
                gtmax =dem
                gtri = n[i]
            dem=1
    if gtmax > m/2 and gtri != 1000001: print(gtri)
    else : print("NO")
    t-=1

    