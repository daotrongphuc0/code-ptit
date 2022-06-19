from __future__ import print_function
import cv2

# path
path = r"E:\code-ptit\python\BTL ttcs\btl\rex.jpg"

# Reading an image in default mode
image = cv2.imread(path)
print("width: {} pixels".format(image.shape[1]))
print("height: {} pixels".format(image.shape[0]))
print("channels: {}".format(image.shape[2]))
image[10, 10] = (0, 0, 255)
cv2.imshow("Image", image)

cv2.imwrite("newimage.jpg", image)
cv2.waitKey(0)
(b, g, r) = image[10, 10]
print("Pixel at (0, 0) - Red: {}, Green: {}, Blue: {}".format(r, g, b))
corner = image[0:50, 0:100]
cv2.imshow("Corner", corner)

image[0:50, 0:100] = (0, 255, 0)

cv2.imshow("Updated", image)
cv2.waitKey(0)
