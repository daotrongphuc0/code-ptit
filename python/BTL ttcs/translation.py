import numpy as np
#import argparse
import btl.imutils as imutils 
import cv2

# ap = argparse.ArgumentParser()
# ap.add_argument("-i", "--image", required=True, help="Path to the image")
# args = vars(ap.parse_args())

# image = cv2.imread(args["image"])
path =r"E:\code-ptit\python\thuctap\rex.jpg"
image = cv2.imread(path)
red = (0, 0, 255)
# cv2.waitKey(0)
# cv2.line(image, (300, 0), (0, 300),(0,255,0),2)
# cv2.imshow("Original", image)
# M = np.float32([[1, 0, 25], [0, 1, 50]])
# shifted = cv2.warpAffine(image, M, (image.shape[1], image.shape[0]))
# cv2.imshow("Shifted Down and Right", shifted)
# cv2.waitKey(0)
# M = np.float32([[1, 0, -50], [0, 1, -90]])
# shifted = cv2.warpAffine(image, M, (image.shape[1], image.shape[0]))
# cv2.imshow("Shifted Up and Left", shifted)
# cv2.waitKey(0)
cv2.rectangle(image, (10, 10), (60, 60), (0,255,0),2)
#shifted = imutils.translate(image, 0, 100)
cv2.imshow("Shifted Down",image)
cv2.waitKey(0)
