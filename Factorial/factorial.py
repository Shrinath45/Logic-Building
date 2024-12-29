n = int(input("Enter a Number to find Factorial: "));

fact = 1

if(n>0):
    for i in range (1, n+1):
        fact = fact * 1
    print(f"The Factorial of {n} is {fact}")
else:
    print("Enter a Positive Number")