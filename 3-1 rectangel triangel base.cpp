import math

class Shape:
    def __init__(self, height, width):
        self.height = height
        self.width = width
    
    def area(self):
        pass
    
    def perimeter(self):
        pass

class Rectangle(Shape):
    def __init__(self, height, width):
        super().__init__(height, width)
    
    def area(self):
        return self.height * self.width
    
    def perimeter(self):
        return 2 * (self.height + self.width)

class Triangle(Shape):
    def __init__(self, height, width):
        super().__init__(height, width)
    
    def area(self):
        return 0.5 * self.height * self.width
    
    def perimeter(self):
     
        hypotenuse = math.sqrt(self.height**2 + self.width**2)
        return self.height + self.width + hypotenuse


rectangle = Rectangle(5, 10)
print("Rectangle Area:", rectangle.area())
print("Rectangle Perimeter:", rectangle.perimeter())

triangle = Triangle(3, 4)
print("Triangle Area:", triangle.area())
print("Triangle Perimeter:", triangle.perimeter())

