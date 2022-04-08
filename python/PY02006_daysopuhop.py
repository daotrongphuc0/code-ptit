def xuli() :
    n = int(input())
    a =sorted([int(x) for x in input().split()])
    b =sorted([int(x) for x in input().split()])
    for i in range(n):
        if(a[i]> b[i]) : return "NO"
    return "YES" 
for _ in [0]*int(input()) :
   print(xuli())