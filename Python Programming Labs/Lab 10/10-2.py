class Vehicle():
    def __init__(self,max_speed,mileage,name,capacity):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage
    def seating_capacity(self,capacity):
        self.capacity = capacity
        return f"The seating capacity of a {self.name}   is {capacity} passengers"
class Bus(Vehicle):
    def __init__(self,max_speed,mileage,name,capacity):
        super().__init__(max_speed,mileage,name,capacity)
        super().seating_capacity(50)
        self.colour = "white"
    def __str__(self):
        return "Speed:"+str(self.max_speed)+" Mileage:"+str(self.mileage)+" Name:"+str(self.name)+" Capacity:"+str(self.capacity)

obj = Bus(100,20,"Honda city",50)
print(obj)

