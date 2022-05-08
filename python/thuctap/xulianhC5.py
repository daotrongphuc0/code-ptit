import numpy as np
import cv2

canvas = np.zeros((300, 300, 3), dtype="uint8") # tạo cua sổ 300x300 px bang chuoi bit 8
green = (0, 255, 0)
cv2.line(canvas, (0, 0), (300, 300), green,3) # kẻ đường thẳng tu 0.0 den 300.300 màu xanh độ rộng 3px
cv2.imshow("Canvas", canvas)
cv2.waitKey(0)

red = (0, 0, 255)
cv2.line(canvas, (300, 0), (0, 300), red,10)
cv2.imshow("Canvas", canvas)
cv2.waitKey(0)

cv2.rectangle(canvas, (10, 10), (60, 60), green)
cv2.imshow("Canvas", canvas)
cv2.waitKey(0)




cv2.rectangle(canvas, (50, 200), (200, 225), red, 5)
cv2.imshow("Canvas", canvas)
cv2.waitKey(0)

blue = (255, 0, 0)
cv2.rectangle(canvas, (200, 50), (225, 125), blue, -1)
cv2.imshow("Canvas", canvas)
cv2.waitKey(0)






# ve hình tròn
canvas = np.zeros((300, 300, 3), dtype="uint8")
(centerX, centerY) = (canvas.shape[1] // 2, canvas.shape[0] // 2) # tâm
white = (255, 255, 255)

for r in range(0, 51, 25):
    cv2.circle(canvas, (centerX, centerY), r, white,5) # vẽ các vòng tròn

cv2.imshow("Canvas", canvas)
cv2.waitKey(0)
# ve random

for i in range(0, 25):
    radius = np.random.randint(5, high=200)
    color = np.random.randint(0, high=256, size=(3,)).tolist()
    pt = np.random.randint(0, high=300, size=(2,))
    cv2.circle(canvas, tuple(pt), radius, color, -1)

cv2.imshow("Canvas", canvas)
cv2.waitKey(0)
