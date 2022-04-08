#name : Đaò Trọng Phúc 
#Mã sv: B19DCCN504

#bai 8.7
from bai_8_3 import User 
class Admin(User) :
    def __init__(self,first_name,last_name,gender,privileges) :
        super().__init__(first_name,last_name,gender)
        self.privileges = privileges
    def show_privileges(self) :
        """hiển thị các quyền của admin"""
        print(self.privileges)
privileges = [ "can add post", "can delete post", "can ban user"]
Myname1 = Admin("Đào Trọng","Phúc","nam",privileges)
Myname1.show_privileges()
