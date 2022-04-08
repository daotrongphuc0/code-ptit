#name : Đaò Trọng Phúc 
#Mã sv: B19DCCN504


# Bài 8.1
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
MyRestaurant  = Restaurant("Hotto","lẩu nướng")
print(f"nhà hàng {MyRestaurant.restaurant_name} chuyên về {MyRestaurant.cuisine_type}")
MyRestaurant.description_restaurant()
MyRestaurant.open_restaurant()