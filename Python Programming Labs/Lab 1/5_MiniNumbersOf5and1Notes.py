x=int(input("Five:"))
y=int(input("One:"))
z=int(input("Amount:"))
f_count= int(z/5)
o_count= z%5
if((f_count*5+o_count)==z and x>=f_count and y>=o_count):
   print("Five Ruppee coins:",f_count)
   print("One Ruppee coins:",o_count)
else:
   print(-1)

