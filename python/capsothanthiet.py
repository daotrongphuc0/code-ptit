import math
def tonguoc(n):
    tong =0
    for i in range(1,int(math.sqrt(n)+1)) :
        if n%i ==0 :
            tong +=i;
            tong+= n/i
    tong -=n
    return tong;
m = [int(x) for x in input().split()]

if(m[0] == tonguoc(m[1]) and m[1] == tonguoc(m[0])) :
    print("YES")
else : 
    print("NO")
