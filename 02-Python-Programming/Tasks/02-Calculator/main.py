op = input("Enter Type of Calculator (Seintific(S) or programmer(P)) : ")
if op == 'S':
    num1 = int(input("Enter First Number: "))
    num2 = int(input("Enter Second Number: "))

    op = input("Enter any of these char for specific opertation:-\n{+,-,*,/,%}\nEnter the operation: ")

    if op == "+":
        print(num1, op, num2 , "=", num1 + num2)
    if op == "-":
        print(num1, op, num2 , "=", num1 - num2)
    if op == "*":
        print(num1, op, num2 , "=", num1 * num2)
    if op == "/":
        print(num1, op, num2 , "=", num1 / num2)

if op == 'P':
    num1 = int(input("Enter Number: "))

    op = input("Enter any of these char for specific opertation:-\n{Hex, Oct, Bin, Dec}\nEnter the operation: ")

    if op == "Hex":
        print(num1, "as", op, "=", hex(num1))
    if op == "Oct":
        print(num1, "as", op, "=", oct(num1))
    if op == "Bin":
        print(num1, "as", op, "=", bin(num1))
    if op == "Dec":
        print(num1, "as", op, "=", (num1))
