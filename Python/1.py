#print("Hi , \nThis Is Gaurav")

# REPL = read evaluate print loop

# num = 10
# #print(num)

# #print(type(num))

# name = "Gaur"

# print("My name is", name) #For gap
# print("My name is" + name) # for no gap

# roll_number = 7

# print(num , name ,roll_number, sep="->") #sep = seperator

#ASCII and Unicode values   
#ASCII -- amerian standard code for information interchange , represents characters as numeric codes 
# A - Z = 65 to 90
# a - z = 97 to 122
# 0 - 9 = 48 to 57
# space = 32

# ord() func used to know ascii value 

#print(ord("a"))

# chr() for character for the ascii value


# print(chr(90))
# # Taking input from user

# your_name = input("Enter your name:")

# print(your_name,", you are great person.")

# age = int(input("Your age: "))
# print("Your age is" ,age)

#sum of two numbers

'''num1 = float(input("Enter First number: "))
num2 = float(input("Enter second number: "))

print("Sum of your given numbers are :",num1+num2)'''

# operators % -> modulus -> returns remainder , ** -> exponentiation , // -> floor division

#Assignment opertors n1+= n2 means n1 = n1 + n2

# Comparison operators  (==) equal (!=) not equal  >,<, <=,>=

# Logical operators => and, or , not # Returns \True or False

exp1 = 5<2
exp2 = 4<6

'''print("exp1 and exp2 :", exp1 and exp2)

print("exp1 or exp2 :", exp1 or exp2)

print("not of exp1 :",not(exp1),"\n"+"not od exp2 :",not(exp2))'''

#identity operator
# 1. is => returs true if both the values are the same object
# 2. is not => ------------------------------not the same-----

# x = 5
# y = 6

# print("if x is y :", x is y )
# print ("if x is not y :", x is not y)

# membership operators (in and not in)
# fruits = ["Apple","Banana","Mango"]
# print("if apple is present in above tupple :","Apple" in fruits)
# print("if guava is not present in above tupple :","guava"  not in fruits)

#Bitwise operator 
# & - AND, | - OR, ^ - XOR, ~ - NOT ,<< - zero fill left shift , >> -signed right shift
#Answer will be in bits
# a = 5
# b = 3

# print("a and b :",a&b)
# print("a or b :", a|b)
# print("a xor b :", a^b)

# Problem 1 => CALCULATE volume of sphere taking radius as input

# k1= float(4/3)
# k2 = float(3.14)

# r = float(input("Enter sphere Radius :"))

# print((k1*k2)* (r**3))

# Opertaors precedence 
# 1. brackets ()
# 2. ** exponentiation
# 3. / , // , %
# 4. multiplication *
# 5. Addition +
# 6. bitwise shift >> << 
# 7. &,|,^
# 8. Comparison operators
# 9. Logical operators

# a = 2
# b = 3
# c = 5

# a = str(a)
# b = str(b)
# c = str(c)

# print(a+b+c)

# Problem 2 => write a program to convert celcius to fahrenheit

# celcius = float(input("Enter temperature in celcius :"))

# fahrenheit = ((9*celcius)/5) + 32

# print(fahrenheit)

# Loops :

# num = int(input("Enter Any Number :"))
# if num >= 0:
#     print("Positive")
# else:
#     print("Negative")    

# number = int(input("Enter a number :"))

# if number%2 == 0:
#     print("It's an Even number")
# else:
#     print("It's an Odd number")    

'''If cost price and selling price of an item is input through the keyboard, 
write a program to determine whether the seller has made profit or incurred loss or no profit no loss. 
Also determine how much profit he made or loss he incurred.'''

# CP = int(input("Please Enter Cost Price :₹"))
# SP = int(input("Please Enter Sellling Price :₹"))

# if SP > CP:
#     print("You Made a Profit of :₹",(SP - CP))
# elif SP == CP:
#     print("You Made No Profit No Loss ")
# else :
#     print("You Made a Loss of :₹", (CP-SP) )    

# Take input percentage Marks and print grade acc to it 

# Marks = int(input("Enter your marks :"))

# if Marks>=81:
#     print("This is a very good score")
# elif Marks>=61:
#     print("This Is a good score")
# elif Marks>=41:
#     print("This is an average score")     
# else :
#     print("Sorry,you not score too well")

#Multiple conditions using "and" and "or" logical operator

# Eng_marks = int(input("Enter your english Marks :"))
# Math_marks = int(input("Enter your maths marks :"))

# if Eng_marks >=80 and Math_marks >=80 :
#     print("You got grade 'A'")
# elif Eng_marks>80 or Math_marks >80:
#     print("You got grade 'B'")
# else:
#     print("You got grade 'C'") 

'''taking positive integer as input andtell if it is a four digit no. or not'''

# num = int(input("Enter a number :"))

# if num>=1000 and num <=9999:
#     print(True)
# else:
#     print(False)

# a = int(input("Enter first digit :"))
# b = int(input("Enter second digit :"))
# c = int(input("Enter third digit :"))

# if a>b and a>c:
#     print(a)
# elif b>a and b>c:
#     print(b)
# else:
#     print(c)

# a = int(input("Enter first digit :"))
# b = int(input("Enter second digit :"))
# c = int(input("Enter third digit :"))

# if a>b:
#     if a>c:
#         print(a)
#     else :
#         print(c)
# else:
#     print(b)
     