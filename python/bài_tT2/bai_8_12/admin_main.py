class Privileges :
    def __init__(self,rights = "have no rights" ) :
        self.rights = rights
    def show_privileges(self) :
        """hiền thị các quyền """
        print(self.rights)

from user import User
class Admin(User) :
    def __init__(self,first_name,last_name,gender,privileges) :
        super().__init__(first_name,last_name,gender)
        self.privileges = Privileges(privileges)


privileges = [ "can add post", "can delete post", "can ban user"]
Myname1 = Admin("Đào Trọng","Phúc","nam",privileges)
Myname1.describe_user()
Myname1.privileges.show_privileges()