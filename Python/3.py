# oops => object oriented programming 
# it is a programming paradym where software design revolve around objects not around functions 


# class rectangle:
#     def set_dimensions (self,height, width):
#         self.height = height
#         self.width = width
    
#     def area(self):
#         return self.height * self.width
    
#     def perimeter(self):
#         return 2*(self.width + self.height)

# rectangle1 = rectangle()
# x  = int(input("Enter height:"))
# y  = int(input("Enter width:"))
# rectangle1.set_dimensions(x,y)
# print("height and width are:" , rectangle1.height,",",rectangle1.width)
# print(rectangle1.area())
# print(rectangle1.perimeter())

'''CLASS CONSTRUCTORS ==> special type functiions that gets involved every time object is created for class'''
# class rectangle():
#     def __init__ (self,height,width):
#         print(f"height is : {height} width is : {width}")
#         self.width = width
#         self.height= height


# rectangel1= rectangle(4,3)

'''ACCESSS MODIFIERS'''
# 1. public modifiers => accesible outside class

# class abc:
#     def __init__(self):
#         self.public_attribute= None 

#     def public_function():
#         pass

# # 2. Private modifiers  => not accesible
# class abc:
#     def __init__(self):
#         self.__public_attribute= None 

#     def __public_function():
#         pass

# # 3. Protected modifier => accesible but should not be accesed
# class abc:
#     def _init__(self):
#         self.__public_attribute= None 

#     def _public_function():
#         pass

'''Inheritance'''

# class parent:                      # SUPER CLASS
#     def __init__(self):
#         print("This is a parent class")

# class child(parent):               #SUB CLASS 
#     def __init__(self):
#         super().__init__()
#         print("This is a child class")

# child1 = child()

# SINGLE INHERITANCE => class A: - - -  
# class B(A): - - - 

# Multiple inheritance => class A : - - - class B :  -- - -
# class c (A,B) =  - - -

# multilevel inheritance => class A : - - - class B(A) :  -- - -
# class c (B):  - - -

'''POLUMORPHISM'''

'''allows objects of different classes to behave as objects of the same superclass'''

# class Animal:
#     def speaks(self):
#         pass

# class Dog(Animal):
#     def speaks(self):
#         print("Barks")

# class Cat(Animal):
#     def speaks(self):
#         print("Meow")

# class Cow(Animal):
#     def speaks(self):
#         print("Mooo")

# dog = Dog()
# cat = Cat()
# cow = Cow()

# dog.speaks()
# cat.speaks()
# cow.speaks()

'''EXCEPTION HANDLING'''

a = int(input("Enter 1st numbrer :"))
b = int(input("Eneter 2nd number :"))

try:
    result = a/b
except ZeroDivisionError:
    result = None
    print("cannot divide by zero")
finally:
    print("Its division is :", result)