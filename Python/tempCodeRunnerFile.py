num1 = float(input("Enter a number :"))
operator = input("Enter Operator :")
num2 = float(input("Enter a number :"))

match operator:
    case"+":
        print(num1+num2)
    case"-":
        print(num1-num2)
    case"*":
        print(num1*num2)
    case "/":
        print(num1/num2)
    case _:
        print("Enter a valid operator")