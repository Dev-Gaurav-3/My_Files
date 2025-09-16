
# x = int(input("Enter a number :"))
# for i in range(1,x+1):
#     for j in range(1,i+1):
#         print(j, end=" ")
#     print()

# def factorial():

#     #base case
#     if n == 0:
#         return 1
    
#     # recurseive case
#     ans = n * factorial(n-1)
#     return ans

# n = int(input("Enter a number :"))
# print(factorial(n))

# class rectangle():
#     def __init__ (self,height,width):
#         print("height is : {height} width is : {width}")
#         self.width = width
#         self.height= height


# rectangel1= rectangle(4,3)


# age = int(input("Enter a num: "))
# txt = f"My age is {age}"

# print(txt)
# txt = "\145"
# print(txt)

# str1 = "asedes"
# i = 0
# j = len(str1)-1

# for x in range(i,j):
#     if(str1[i] == str1[j]):
#         i += 1
#         j -= 1
#     else:
#         print("no")
#         break

# n = 241895
# n = str(n)
# count = 0
# for i in range(0,len(n)):
#     if((int(n[i]))%2 == 0):
#         count += 1
# print(count)

# str1 = "python"
# print(str1[len(str1)-1]+str1[1:len(str1)-1]+str1[0])

# def no_of_days(m, y):
#     if(m == 2 and y%7 == 0):
#         return 29
#     elif(m==2 and y%7 != 0):
#         return 28
#     elif(m<8):
#         if(m%2 == 0):
#             return 30
#         else:
#             return 31
#     elif(m<13):
#         if(m%2 == 0):
#             return 31
#         else:
#             return 30

# def days_of_year(y):
#     if(y%4 == 0):
#         return 366
#     else:
#         return 365

# g_day = int(input("Enter date: "))
# g_month = int(input("Enter month: "))
# g_year = int(input("Enter year: "))

# t_day = 1
# t_month = 1
# t_year = 2024

# days_bw = 0

# if(g_year>t_year):
#     f_left_days = g_day

#     print(f_left_days)

#     days_bw = f_left_days
#     for i in range(t_month, 13):
#         days_bw += no_of_days(i, t_year)

#     print(days_bw)

#     for i in range(1, g_month):
#         days_bw += no_of_days(i, g_year)

#     print(days_bw)

#     for i in range(t_year + 1, g_year):
#         days_bw += days_of_year(i)

#     print(days_bw)
#     print(days_bw%7)
# else:
#     f_left_days = no_of_days(g_month) - g_day - 1

#     print(f_left_days)

#     days_bw = f_left_days
    
#     for i in range(g_month + 1, 13):
#         days_bw += no_of_days(i)

#     print(days_bw)

#     for i in range(g_year + 1, t_year):
#         days_bw += days_of_year(i)

#     print(days_bw)
#     days_bw -= 1


#     day_of_week = 7 - (days_bw%7)
#     print(day_of_week)

# class person:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
# p1 = person("Gaur",19)

# print(p1.name)
# print(p1.age)

# def myfun(n):
#     if(n ==0):
#         return 0
#     return n + myfun(n-1)

# print(myfun(5))
