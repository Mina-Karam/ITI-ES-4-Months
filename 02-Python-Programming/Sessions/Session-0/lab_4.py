x = "awsome"

def myfunc():
    print("Python is " + x)

myfunc()

print("===========================")
print("===========================")

x = "awesome"

def myfunc():
    x = "fantastic"
    print("Python is " + x)

myfunc()

print("Python is " + x)

print("===========================")
print("===========================")

def myfunc():
    global x
    x = "fantastic"

myfunc()

print("Python is " + x)
