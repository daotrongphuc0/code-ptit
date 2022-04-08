#name : Đaò Trọng Phúc 
#Mã sv: B19DCCN504


# Bài 8.4
class Restaurant :
    def __init__(self,restaurant_name,cuisine_type,number_served = 0) :
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = number_served
    def description_restaurant(self) :
        """In ra màn hình thông tin nhà  hàng """
        print(f"Nhà hàng : {self.restaurant_name}")
        print(f"Loại ẩm thực: {self.cuisine_type}")
    def open_restaurant(self):
        """Thông báo nhà hàng đang mở cửa"""
        print(f"Nhà hàng {self.restaurant_name} hiện đang mở cửa")
        print("Xin mời quý khách ")
    def set_number_served(self,number_served):
        """đặt số lượng khách """
        self.number_served = number_served
    def increment_number_served(self,number) :
        """tăng số lượng khách"""
        self.number_served = self.number_served +number

MyRestaurant  = Restaurant("Hotto","lẩu nướng",80)
print(f"nhà hàng {MyRestaurant.restaurant_name} đã phục vụ {MyRestaurant.number_served} khách\n\n")
MyRestaurant.set_number_served(150)
print(f"nhà hàng {MyRestaurant.restaurant_name} đã phục vụ {MyRestaurant.number_served} khách")
