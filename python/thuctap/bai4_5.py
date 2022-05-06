from multiprocessing import Value


s1 =[]
for i in range(4):
    s1.append(input())
td1 = {}
for i in range(2):
    tmp = input()
    tmp = tmp.split(":")
    td1[tmp[0]] = tmp[1]
timkiem = input()
for key,value in td1.items():
    if key == timkiem:
        print(f"{key}:{value}")
        break
