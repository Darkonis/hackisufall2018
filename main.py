import cv2 as cv
import sys
import os

from  ctypes import *
process = CDLL('./example.so')

cap = cv.VideoCapture(0) #This creates an object named cap. It captures images from your webcam, which is defined by the number 0.

while cap.isOpened():
	returnCheck, img = cap.read() #Tries to capture an image (read an image from the webcam). Stores the image in img.
	cv.imshow("Webcam", img) #cv2.imshow() displays an image.  Can be from a webcam, a file, etc.
	if cv.waitKey(2) & 0xFF == ord('q'): #if the user presses the q key...
		break #exit the while loop.

cap.release() #This tells Windows "hey, we're done with the webcam, you can have it back now"
cv.destroyAllWindows() #We're done, so destroy any Windows created by opencv.
process.makeCaca()
