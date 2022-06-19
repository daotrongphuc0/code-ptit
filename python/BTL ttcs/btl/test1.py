
import numpy as np
import cv2

def translate(image, x, y):
    M = np.float32([[1, 0, x], [0, 1, y]])
    shifted = cv2.warpAffine(image, M, (image.shape[1], image.shape[0]))
    return shifted



green =(0,255,0)
canvas = cv2.imread("E:/rex.jpg")
cv2.rectangle(canvas, (-5, 10), (60, 60), green,2)
canvas = translate(canvas, 50,50)
cv2.imshow("Canvas", canvas)
cv2.waitKey(0)