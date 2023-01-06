a=int(input("First:"))
b=int(input("Second:"))
c=int(input("Third:"))

if(a>b and a>c):
    largest=a
    if(b>c):
        print("largest",a)
        print("Second Largest",b)
        print("Smallest",c)
    else:
        print("largest",a)
        print("Second largest",c)
        print("Smallest",b)
elif(b>c and b>a):
    largest=b
    if(a>c):
        print("largest",b)
        print("Second Largest",a)
        print("Smallest",c)
    else:
        print("largest",b)
        print("Second largest",c)
        print("Smallest",b)
elif(c>a and c>b):
    largest=c
    if(a>b):
        print("largest",c)
        print("Second Largest",a)
        print("Smallest",b)
    else:
        print("largest",c)
        print("Second largest",b)
        print("Smallest",a)
