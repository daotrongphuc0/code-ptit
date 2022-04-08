while True :
    m = [int(x) for x in input().split()]
    if m[1] == 0 and m[2]==0 and m[3] == 0 and m[1] == 0 : break
    dem = int(0)
    if m[1] == m[2] and m[2]==m[3] and m[3] == m[0] : print(0)
    else :
        while True :
          x = abs(m[0])
          m[0] = abs(m[0]-m[1])
          m[1] = abs(m[1]-m[2])
          m[2] = abs(m[2]-m[3])
          m[3] = abs(m[3]-x)
          dem = dem+1
          if m[1] == m[2] and m[2]==m[3] and m[3] == m[0]  : break
        print(dem)
        