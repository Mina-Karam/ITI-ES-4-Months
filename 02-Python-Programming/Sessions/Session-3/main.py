Code = '''
Hello
Mina
ITI
ES
'''

f1 = open(r"D:\Courses\ITI-ES-4-Months\Code\ITI-ES-4-Months\02-Python-Programming\Sessions\Session-3\Code.txt", "w")
f1.write(Code)
f1 = open(r"D:\Courses\ITI-ES-4-Months\Code\ITI-ES-4-Months\02-Python-Programming\Sessions\Session-3\Code.txt", "r")

print(f1.read())
f1.close()

f1 = open(r"D:\Courses\ITI-ES-4-Months\Code\ITI-ES-4-Months\02-Python-Programming\Sessions\Session-3\Code.txt", "r")
print(f1.readline(3))
print(f1.readline())
print(f1.readline())
print(f1.readline())

f1.close()
