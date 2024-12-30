num1 = int(input("Enter value of num1: "))
num2 = int(input("Enter value of num2: "))
num3 = int(input("Enter value of num3: "))

if(num1>num2 & num1>num3):
    print(f"{num1} is largest than {num2} & {num3}")
elif(num2>num1 & num2>num3):
    print(f"{num2} is largest than {num1} & {num3}")
else:
    print(f"{num3} is largest than {num1} & {num2}")