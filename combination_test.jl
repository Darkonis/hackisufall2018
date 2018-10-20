
#using opencv
using PyCall
using Conda

#include
#@pyimport cv2
cv2 = pyimport(:cv2) #> PyObject <module 'math'>
np= pyimport(:numpy)
cap = cv2[:VideoCapture](0) #This creates an object named cap. It captures images from your webcam, which is defined by the number 0.

while cap[:isOpened]()
	returnCheck, img = cap[:read]() #Tries to capture an image (read an image from the webcam). Stores the image in img.
	cv2[:imshow]("Webcam", img) #cv2.imshow() displays an image.  Can be from a webcam, a file, etc.
	#println(cv2[:waitKey](2))

	#readline()
	if cv2[:waitKey](2)==113||cv2[:waitKey](2)==81 #& 0xFF == ord('q') #if the user presses the q key...
		break #exit the while loop.
	end
end
#println("test")
cap[:release]() #This tells Windows "hey, we're done with the webcam, you can have it back now"
#cap[:release]()
cv2[:destroyAllWindows]() #We're done, so destroy any Windows created by opencv.
if(isfile("C:\\Windows\\system32\\msvcrt.dll"))
    println(ccall( (:clock, "C:\\Windows\\system32\\msvcrt.dll"), Int32, ()))
	 ccall((:printf,"C:\\Windows\\system32\\msvcrt.dll"),Cint,(Cstring,),"Success!")
end
