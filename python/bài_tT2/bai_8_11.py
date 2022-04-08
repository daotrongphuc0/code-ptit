#name : Đaò Trọng Phúc 
#Mã sv: B19DCCN504

# bài 8.11
class User :
    def __init__(self,first_name,last_name,gender) :
        self.first_name= first_name
        self.last_name = last_name
        self.gender = gender
    def describe_user(self) :
        print(f"name: {self.first_name} {self.last_name} \ngender: {self.gender}")
    def greet_user(self) :
        print(f"{self.last_name} xin chào !!!")


class Privileges :
    def __init__(self,rights = "have no rights" ) :
        self.rights = rights
    def show_privileges(self) :
        """hiền thị các quyền """
        print(self.rights)


class Admin(User) :
    def __init__(self,first_name,last_name,gender,privileges) :
        super().__init__(first_name,last_name,gender)
        self.privileges = Privileges(privileges)


privileges = [ "can add post", "can delete post", "can ban user"]
Myname1 = Admin("Đào Trọng","Phúc","nam",privileges)
Myname1.describe_user()
Myname1.privileges.show_privileges()