def xuli() :
    a = ""
    s =input()
    for i in range(0,len(s),2) :
        for j in range(int(s[i+1])) :
            a += s[i]
    return a
for _ in [0]*int(input()) :
   print(xuli())