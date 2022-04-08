#name : Đaò Trọng Phúc 
#Mã sv: B19DCCN504

# bài 8.5
class User :
    def __init__(self,first_name,last_name,gender,login_attempts=0) :
        self.first_name= first_name
        self.last_name = last_name
        self.gender = gender
        self.login_attempts = login_attempts
    def describe_user(self) :
        """In thông tin người dùng"""
        print(f"name: {self.first_name} {self.last_name} \ngender: {self.gender}")
        print(f"số lần đăng nhập {self.login_attempts}")
    def greet_user(self) :
        """lời chào"""
        print(f"{self.last_name} xin chào !!!") 
    def increment_login_attempts(self) :
        """tăng số lần đăng nhập lên 1"""
        self.login_attempts = self.login_attempts +1
    def reset_login_attempts(self) :
        """reset số lần đăng nhập về 0"""
        self.login_attempts = 0

myname = User("Đào Trọng","Phúc","nam",3)
myname.describe_user()
print("\n")
myname.increment_login_attempts()
myname.describe_user()
print("\n")
myname.reset_login_attempts()
myname.describe_user()
print("\n")
