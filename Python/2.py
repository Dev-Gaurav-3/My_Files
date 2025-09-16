#Match case

# num1 = float(input("Enter a number :"))
# num2 = float(input("Enter a number :"))
# operator = input("Enter Operator :")

# match operator:
#     case"+":
#         print(num1+num2)
#     case"-":
#         print(num1-num2)
#     case"*":
#         print(num1*num2)
#     case "/":
#         print(num1/num2)
#     case _:
#         print("Enter a valid operator")

#Ternary Operator

# num = int(input("Enter a number :"))
# output = "Even" if num%2 ==0 else "odd"
# print(output) 

#LOOPs
# for i in range(1,10):  #range(start,end,step) step is set to 1 default but u can change it 
#     print("hi")
# for i in range(1,10,2):
#     print("h")

# Print all the elements of the list

# list = [10,20,30,40,50,60]

# for i in list:
#     print(i)

#Pattern Prining

# 1.

# n = int(input("Enter n : "))

# for _ in range(n):
#     print("*" * 5)

# 2.

# n = int(input("Enter n :"))

# for _ in range(n):
#     i = 1
#     while(i<=n):
#         print(i, end="")
#         i += 1
#     print()



# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(j, end="")
        
#     print()
# n = 6
# for i in range(1,n+1):
#     for j in range(65,65+i,1):
#         print(chr(j), end="")
        
#     print()
# n = 5
# for i in range(1,n+1):
#     print(" " * (n-i), end="")

#     for j in range(1,2*i):
#         print(j,end = "")
#     print()

#List

# list = ["banana","apple","Mango"]
# print(list[0])
# print(list[2])
# print(list[1])

# List is Mutable

# list[1] = "Orange"

# print(list[1])

# print(len(list))

# if "banana" in list:
#     print(True)
# else:
#     print(False)

#print(list[-1])

#print(list[0:2]) # 2nd idex item will not be included
# Adding elements to a list
#1. append() =>add item to the end of the list  => list.append("cherry")
#2. insert() => add item to a particular index  => list.insert(index,element)
#3. extend() => list.extend(list2)

#removing elements form list
#1. remove() => list.remove(element)
#2. pop() => list.pop(index no.)

# Sorting a list

# list.sort() by default it is in ascending order
# list.sort(reverse= True) in descending

# When we want to make new list from an existing list

# fruits = ["banana","apple","mango"]

# new_fruits = [fruit for fruit in fruits if "n" in fruit]

# print(new_fruits)

# Nested Lists

# list = [1,2,3,4]

# list[2]= [5,6,7]

# print(list)
# print(list[2][1])

# list.insert(2,[5,6,7])
# print(list)

'''(Q) =>list = [23,65,19,90] swap idx[1] and idx[2] '''

# n = int(input("Enter size of list :"))
# list = []
# for _ in range(n):
#     num = int(input())
#     list.append(num)
# print("Your List is :",list)

# idx1 =int(input("Enter 1st index: "))
# idx2 =int(input("Enter 2nd index: "))

# temp = list[idx1]
# list[idx1] = list[idx2]
# list[idx2] = temp
# print(list)

# TUPLE  => used to store multiple items in a variable
# it is Immutable

# you have to make a comma(,) in tuple of 1 item
# colour = ("orange")  # it is str
# fruits = ("apple",) # now this is a tuple another method is fruits = tuple("apple")
# print(type(colour))
# print(type(fruits))
# print(len(fruits))

# color = ("orange","red","blue")

# print(color[0])
# print(color[2])
# print(color[1])
# print(color[0:2])

# if "green" in color:
#     print("Yes")
# else:
#     print("NO")

# # To traverse a tuple
# for i in color:
#     print(i)

# #UNPACKING A TUPLE
# color1,color2,color3 = color
# print(color1,color2,color3)

# REVERSE A TUPLE

# tuple1 = (10,20,30,40,50)

# for i in reversed(tuple1):
#     print(i,end=" ")

# SETS
# Unordered , immutable , unindexed, duplicates not allowed

# set1 = {"Gaur","John","tia"}
# print(set1)
# set1.add("Sumbhi")
# set1.remove("tia")
# set1.remove("hlo") # this will through error 
# set1.discard("hlo") # this will not through error

# for x in set1:
#     print(x)
    
# s1 = {"a","b","c"}
# s2 = {"e","d","a"}

# s3 = s1.union(s2)
# print(s3)

# s1.update(s2)
# print(s2)

# s1.intersection_update(s2)# keep only duplicates 

# print(s1)

# s1.symmetric_difference_update(s2) # keep all values except duplicates
# print(s1)

# Dictionary items 
#contains key valur pair , ordered , changeable, unindexed, 
phones = {
    "John" :698465,
    "Ria" : 646445,
    "Joy" : 466456,
}

# print(phones["John"])
# # or
# print(phones.get("john"))
# print(phones.keys())

# update values
# phones["Joy"] = 798985
# # add new element
# phones["kia"] = 789223

# print(phones)

# phones.pop("Joy")
# print(phones)

# phones.popitem() # removes last element
# phones.clear() # This will empty the dictionary

# for x in phones:

#     print(x) # will print all the keys 

# for x,y in phones.items():
#     print(x,y)  # will print all the key as well as values

# list in list

phone = {
    "area1" : {
        "a": 1,
        "b" : 2,
        "c": 3          
    },
    "area2" : {
        "x":3,
        "y":4,
        "z" :6
    }
}

# print(phone["area1"]["c"])
# print(phone.keys) # print all the keys
# print(phone.values) # ------------ values

# print(sum(phone["area1"].values()))

'''Given a string and a number N, we need to mirror the characters from the N-th 
position up to the length of the string in alphabetical order
 In mirror operation, we change 'a' to 'z', 'b' to 'y', and so on.'''


# inp_str = input("Enter str :")
# n = int(input("Enter n :"))

# # creating dictionary 

# alphabets = "abcdefghijklmnopqrstuvwxyz"

# reverse = alphabets[::-1]
# dict1 = dict(zip(alphabets,reverse))

# prefix = inp_str[0:n-1]
# suffix = inp_str[n-1:]

# mirror =""

# for i in range (0,len(suffix)):
#     mirror = mirror+ dict1[suffix[i]]

# res = prefix + mirror

# print("The Result :", res)

''' FUNCTIONS '''

# def func name (parametres ){
#    statement
#    return ;
#}

# let add() be any func

#Arguement => add(x,y)
# positional arguemt => add(3,2)
# keyword arguemen or named arguement => add(n2=3,n1=2)

# default arguements => when n1 and n2 are predetermined in the func

#arbitrary arguements *args and **kwargs 

# def student_info(**kwargs):
#     for x,y in kwargs.items():
#         print(x,"is",y)
# student_info(name = "Gaur", age = 19)
# student_info(name = "gaurav" , age = 18)

# PASS BY VALUE(immutable objects - strings,integrs ,float ,tuple) =>any change made to them inside func do not affect the original variable outside func

# def addone(x):
#     x = x+1

#     print("inside func :",x)
# x =  5
# addone(x)
# print("outside func :",x)

#PASS BY REFERRENCE => mutable objects - List, Dictionary

# def modify_list(lst):
#     lst.append(4)
#     print("inside func:",lst)

# lst = [1,2,3]
# modify_list(lst)
# print("outside func :",lst)

'''Write a function to find factorial of a number'''

# def factorial(n):
#     ans =1
#     if n == 0:
#         ans =1
#     else:
#         for i in range(1,n+1):
#             ans *= i
#     return ans


# n = int(input("Enter a number:"))
# answer = factorial(n)
# print(answer)


'''RECURSION'''
# calling a same function in a function for n-1
# def recurse():
# recurse()


# def factorial(n):

#     #base case
#     if n == 0:
#         return 1
    
#     # recurseive case
#     ans = n * factorial(n-1)
#     return ans

# n = int(input("Enter a number :"))
# print(factorial(n))

'''write a func to print sum from 1 to n'''

# def sum(n):
#     if n == 1:
#         return 1
#     ans = (n) + (sum(n-1))
#     return ans

# n = int(input("Ente a number :"))
# print(sum(n))

'''make a function which calculates a raised to power b using recursion'''

# def power(a,b):
#     if b == 0:
#         return 1
#     ans = a * power(a,b-1)
#     return ans


# a = int(input("Enter a :"))
# b = int(input("Enter b :"))

# print(power(a,b))

'''make a function which calculates febonacci sequence using recursions'''

# def febonacci(n):
#     if n==1:
#         return 0
#     elif n == 2:
#         return 1
#     else:
#         return (febonacci(n-1) + febonacci(n-2))
    
# n = int(input("Enter n :"))
# print(febonacci(n))

# # to print whole sequence 

# for i in range(1,n+1):
#     print(febonacci(i),end="")


'''STRINGS'''
# Immutable
#have index 

name1 = "hii"
name2 = 'HELLO'
name3 = '''hi,my name is
gaur'''  # when to write code in mujtiple lines use '''

# print(name1)
# print(name2)
# print(name3)

# print(name2[2])

# Traversing a string

# for i in name1:
#     print(i) 

# print(name1.find('i')) returns index of first occurence 

# slicing a string => use to get a part of a string
# syntax:
# [start:end]

# print(name3[5:])

# change to uppercase , Lowercase

# print(name1.upper())
# print(name2.lower())
# print(name1.capitalize()) # capital only first letter

# stripping / removing any whitespaces 
# str1 = ("   hello world  ")
# print(str1.strip())
# replace()
# string.replace(old,new,count) if count is not given by then it will replace all the occurences

# str2 = 'Hii,This is Gaur, my name is Gaur'

# new_str = str2.replace("Gaur","Gaurav",1)
# print(new_str)
# new_str2 = str2.replace("Gaur","Gaurav")
# print(new_str2)

# split() =>used to split the string into a list of substring 
# string.split(sep,maxsplit)

str3 = "apple,mango,banana"
new_str3 = str3.split(",",2)
print(new_str3)

# format() => used to insert variable values in a string 

# name = "Gaur"
# marks = 98

# str1 = "Student name is {s} and he got {m} marks".format(s= name,m = marks)
# print(str1)