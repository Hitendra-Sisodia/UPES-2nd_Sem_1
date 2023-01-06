n=int(input("Number:"))

count=0
while(n!=0):
    digit=n%10
    count=count*10+digit
    n//=10;

print(count)
