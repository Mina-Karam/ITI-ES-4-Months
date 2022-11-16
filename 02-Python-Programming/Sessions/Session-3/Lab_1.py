# Notes about python 
# Every thing in python is object 
# The variables are refered to the value 

a = [1 , 2 , 3]
b = a
# The variables are refered to the value
print(b)
a.append(1000)
print("b1 = " , b)
print("a1 = ",a)
print(id(a))
print(id(b))

# what to do if we need a just copy 
a = [1 , 2 , 3]
b = a.copy()
a.append(1000)
print("b2 = ",b)
print("a2 = ",a)

# This identity has to be unique and constant for this object during the lifetime
# memory address of an object in Python

# import addressof and c_int modules 
# from ctypes module
from ctypes import c_int, addressof
a = 10 
# get memory address of variable
print(addressof(c_int(a)))
print(id(a))

# del a
# print(id(a)) # will return error 