import tkinter
from tkinter import *
def clicked():
    username = entry1.get()
    print("Hello "+username)
r = Tk()
r.title("Its Title")
r.geometry('250x150')
button1 = Button(r,text = "Click me",fg="green",bg ="Yellow",command=clicked)
button1.grid(row=1,column=1)
# Question 2
label2 = Label(r,text="User Name")
label2.grid(row=2,column=0)
entry1 = Entry(r)
entry1.grid(row=2,column=1)

var1 = IntVar()
radio1 = Radiobutton(r,text="First",variable = var1, value = 1)
radio1.grid(row=3,column=0)
radio2 = Radiobutton(r,text="Second",variable = var1, value = 2)
radio2.grid(row=3,column=1)
radio3 = Radiobutton(r,text="Third",variable = var1, value = 3)
radio3.grid(row=3,column=2)

mainloop()

if(var1.get() == 1):
    print("First")
if(var1.get() == 2):
    print("Second")
if(var1.get() == 3):
    print("Third")
