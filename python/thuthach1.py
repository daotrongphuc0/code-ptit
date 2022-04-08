n =int(input("Hãy nhập độ dài tam giác :"))
print('*')
for x in range(0,n-2,1):
    if x ==0:
        print("* *")
    else :
        print('*',' '*x,'*')
for x in range(n-2,-1,-1):
    if x==0 :
    	print('* *')
    else :
    	print('*',' '*x,'*')
print('*')
