num1=int(input())
num2=int(input())
num3=int(input())
product=0
if (num1 != 7 and num2 != 7 and num3 != 7):
    product = num1 * num2 * num3
elif (num1 == 7):
    product = num2 * num3
elif(num2 == 7):
    product = num3
elif(num3 == 7):
    product = -1
print(product)
    
