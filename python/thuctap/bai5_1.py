class Bus:
    def __init__(self, model, max_speed, mileage,type):
        self.model = model
        self.max_speed = max_speed
        self.mileage= mileage
        if type == "Bus":
            self.fare = round(1.1*(int(mileage)*100),1)
        else :
            self.fare = (int(mileage)*100)
        self.type = type

s = input().split(" ")
s[3]=s[3].replace("(","") 
s[3] = s[3].replace(")", "")
s[3] = s[3].title()
bus1 = Bus(s[0],s[1],s[2],s[3])
if bus1.type=="Bus" :
    print(type(bus1))
else:
    print("Also a Vehicle")
s1 = input().split(" ")
s1[3] = s1[3].replace("(", "")
s1[3] = s1[3].replace(")", "")
s1[3] = s1[3].title()
bus11 = Bus(s1[0], s1[1], s1[2],s1[3])
if bus11.type == "Bus":
    print(type(bus11))
else:
    print("Also a Vehicle")