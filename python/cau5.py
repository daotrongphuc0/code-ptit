n =int(input())
m = [int(x) for x in input().split()]
pttruoc =0;
for i in range(len(m)):
    m[i] = m[i] +pttruoc
    pttruoc = m[i]
tong =0 
tich  =1
for i in m :
    tong += i
    tich*=i
print(f"{tong} {tich}")