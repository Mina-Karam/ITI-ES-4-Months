num1, num2 = input("Enter your two number: ").split(" ", 2)
num1 = int(num1)
num2 = int(num2)

#num1 = bin(num1)

#num2 = input("Enter your Second number: ")
#num2 = bin(num2)

result = 0

result = num1 & num2
print(bin(result))

result = num1 | num2
print(bin(result))

result = num1 ^ num2
print(bin(result))

result = ~num1
print(bin(result))

result = num1 >> 2
print(bin(result))

result = num1 << 2
print(bin(result))