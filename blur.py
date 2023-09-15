import cv2

# Loading  the pre-trained face cascade classifier for the purpose of face detection
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Open the video capture device (0 for the default camera) for taking the input of the image, video ,face
cap = cv2.VideoCapture(0)

while True:
  
    ret, frame = cap.read()

    # Detect faces in the frame where face_cascade is the object that you created earlier and detectmultiscale is the method which is used to detect the faces as an input 

    #frame is the input rectangualar frame which will take x ,y, width, height as an input

    #scalefactor=1.1 is the high detection as much as small scale factor you will take you get the fast detection but may also increase the accuracy and if you will take large scale factor then the detection will take alot of time and the accuracy also decrease

    #minneighbours will tell that   how many neighbors (rectangles) each potential face region should have to be considered a valid face and if you will increase the minneighbors then it may get get false positive of valid face and sometime it will be missed the valid face and will miss it.

#minsize it is the minimum size of the detected region of the face and it will be a tuple where first value is the width and the second value will be the height
    faces = face_cascade.detectMultiScale(frame, scaleFactor=1.1, minNeighbors=5, minSize=(30, 30))

    # Apply Gaussian blur to the detected face(s) and keep the rest of the frame as it is
    for (x, y, w, h) in faces:
        # for (x, y, w, h) in faces: This is a loop that iterates through each detected face in the faces list, which contains the coordinates and dimensions (x, y, width, height) of each detected face rectangle 

        #face ->> it will take the frame and y will gone to height  and the x will gone to width

        face = frame[y:y+h, x:x+w]
        #blurred face will take the gaussian blur method which will use to blur the face and it will take the input as a face and (99,99)will be the kernal for the blurring effect

        blurred_face = cv2.GaussianBlur(face, (99,99), 0)

        
        # frame[y:y+h, x:x+w] ->>here it will replace the original image face with the blurr image and will give the blurr effct on the image that you are displaying on it
        frame[y:y+h, x:x+w] = blurred_face

    # Display the frame with blurred face(s)
    cv2.imshow('Blurred Faces', frame)

    # Break the loop when the Enter key is pressed
    if cv2.waitKey(1) == 13:  # 13 is the ASCII code for Enter
        break

# Release the video capture and close all OpenCV windows
cap.release()
cv2.destroyAllWindows()