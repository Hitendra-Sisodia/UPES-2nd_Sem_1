n=int(input("Number:"))

temp=0
org=n
while(n!=0):
    lastdigit=n%10
    temp=temp+(lastdigit**3)
    n//=10

if(temp==org):
    print("Armstrong number")
else:
    print("Non Armstrong number")
    
