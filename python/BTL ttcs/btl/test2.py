import tkinter as tk
from tkinter import   BOTTOM, END, LEFT, TOP, filedialog
from PIL import ImageTk, Image
import cv2
import numpy as np
# whether cropping is being performed or not
refPt = []
cropping = False
def click_and_crop(event, x, y, flags, param):
	# grab references to the global variables
	global refPt, cropping
	# if the left mouse button was clicked, record the starting
	# (x, y) coordinates and indicate that cropping is being
	# performed
	if event == cv2.EVENT_LBUTTONDOWN:
		refPt = [(x, y)]
		cropping = True
	# check to see if the left mouse button was released
	elif event == cv2.EVENT_LBUTTONUP:
		# record the ending (x, y) coordinates and indicate that
		# the cropping operation is finished
		refPt.append((x, y))
		cropping = False
		# draw a rectangle around the region of interest
		cv2.line(image, refPt[0], refPt[1], (0, 255, 0), 2)
		cv2.imshow("image", image)
# construct the argument parser and parse the arguments

image = cv2.imread("E:/rex.jpg")
root = tk.Tk()
cv2.namedWindow("image")
cv2.setMouseCallback("image", click_and_crop)
# keep looping until the 'q' key is pressed
cv2.imshow("image", image)
cv2.waitKey(0)
print(refPt)
# if there are two reference points, then crop the region of interest
# from teh image and display it

