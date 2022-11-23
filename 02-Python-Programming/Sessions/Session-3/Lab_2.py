from tkinter import *

def ButtonPressTracker():
    ButtonPressTracker.counter +=1 
    print("The button pressed" , ButtonPressTracker.counter)
ButtonPressTracker.counter =0

# construct main window through calling TK()
# window_1 = tk.Tk() for other python versions  
window_1 = Tk() 

# adding title to the window 

window_1.title("welcome Tkinter ")

# controlling window geometry in pixles 
window_1.geometry('1000x500')   # width X heoght 


B_1  =Button(window_1 , text = "Increment The button" , bd = '5' , command = ButtonPressTracker)
B_1.pack(side = TOP)

# Adding button to a specific window with a specific name and specific button name 
# bd border size
# destroy : delete the application 
B_2  =Button(window_1 , text = "Close the window" , bd = '5' , command = window_1.destroy)
B_2.pack(side = BOTTOM)


# Call the main loop which is used when the application is ready to run to keep the code displaying 
window_1.mainloop()