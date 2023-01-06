import tkinter
from tkinter import *
def clicked():
    print("Button was clicked")
r = Tk()
r.title("Its Title")
r.geometry('100x100')
label1 = Label(r,text ="Hello")
label1.grid(row = 0)
button1 = Button(r,text = "Click me",fg="green",bg ="Yellow",command=clicked)
button1.grid(row=1,column=0)
# question no
mainloop()
