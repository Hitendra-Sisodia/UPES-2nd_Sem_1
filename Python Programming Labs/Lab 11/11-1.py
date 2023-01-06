class Employee:
    def __init__(self,FirstName,LastName,Pay):
        self.FirstName = FirstName
        self.LastName = LastName
        self.Pay = Pay
        self.Email = FirstName+"."+LastName+"@company.com"
obj = Employee('Hitendra','Sisodia',200000)
print(obj.FirstName)
print(obj.Email)