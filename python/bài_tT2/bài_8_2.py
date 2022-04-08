#name : Đaò Trọng Phúc 
#Mã sv: B19DCCN504


# Bài 8.2
class Restaurant :
    def __init__(self,restaurant_name,cuisine_type) :
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    def description_restaurant(self) :
        """In ra màn hình thông tin nhà  hàng """
        print(f"Nhà hàng : {self.restaurant_name}")
        print(f"Loại ẩm thực: {self.cuisine_type}")
    def open_restaurant(self):
        """Thông báo nhà hàng đang mở cửa"""
        print(f"Nhà hàng {self.restaurant_name} hiện đang mở cửa")
        print("Xin mời quý khách ")

r1 = Restaurant("Phở Thìn","phở")
r2 = Restaurant("Hotto","lẩu nướng")
r3 = Restaurant("Lẩu Phan","lẩu")

r1.description_restaurant()
r2.description_restaurant()
r3.description_restaurant()