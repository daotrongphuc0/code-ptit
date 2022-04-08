a = []
while(len(a)<10 ):
    tmp = [int(x) for x in input().split()]
    for i in tmp :
        a.append(int(i))
c = []
for i in a:
    tmp =i%42
    if tmp not in c : c.append(tmp)
print(len(c))