import cv2 as cv
from  ctypes import *
process = CDLL('./example.so')

cap = cv.VideoCapture(0) #This creates an object named cap. It captures images from your webcam, which is defined by the number 0.
cap.set(cv.CAP_PROP_FRAME_WIDTH, 1920) #Now we're capturing a nice 1080p image!
cap.set(cv.CAP_PROP_FRAME_HEIGHT, 1080)
cap.set(cv.CAP_PROP_AUTOFOCUS, 0) #Gets rid of autofocus - this can be annoying and mess with image processing.
cap.set(cv.CAP_PROP_FOCUS, 0) #Set a fixed focal distance.
cap.set(cv.CAP_PROP_BRIGHTNESS, 127) #Sets the brightness of your image. 0-255
cap.set(cv.CAP_PROP_SATURATION, 127) #Sets the saturation(0-255)
while True:
	returnCheck, img = cap.read() #Tries to capture an image (read an image from the webcam). Stores the image in img.
	#cv.imshow("Webcam", img) #cv2.imshow() displays an image.  Can be from a webcam, a file, etc.
        toSend=[];
        for i in img:
           toSend.append(c_void_p[i])
        process.makeCaca(img.shape[0],img.shape[1],toSend,img.size);
        #byref(data)
	if cv.waitKey(2) & 0xFF == ord('q'): #if the user presses the q key...
		break #exit the while loop.

cap.release() #This tells Windows "hey, we're done with the webcam, you can have it back now"
cv.destroyAllWindows() #We're done, so destroy any Windows created by opencv.
process.makeCaca()
