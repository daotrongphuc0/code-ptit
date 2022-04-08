n = int(input("nhap so luong phan tu day fibo:"))
list_1 =range(0,n)
list_2= map(lambda x: x if x <2 else list_2[x-1]+list_2[x-2] , list_1)
print(list_2)