# Import all methods of the module  
from tkinter import *

# construct main window through calling TK()
# window_1 = tk.Tk() for other python versions  
window_1 = Tk() 

# adding title to the window 

window_1.title("Hello From Tkinter ")

# Adding lable to a specific window with a specific name 

label_1  =Label(window_1 , text = "Label1")

# using geomertry function to set the lable in a specific place [BOTTOM , LEFT , RIGHT] 

label_1.pack(side = TOP)

# Call the main loop which is used when the application is ready to run to keep the code displaying 
window_1.mainloop()