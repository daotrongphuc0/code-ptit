class User :
    def __init__(self,first_name,last_name,gender) :
        self.first_name= first_name
        self.last_name = last_name
        self.gender = gender
    def describe_user(self) :
        print(f"name: {self.first_name} {self.last_name} \ngender: {self.gender}")
    def greet_user(self) :
        print(f"{self.last_name} xin chào !!!") 