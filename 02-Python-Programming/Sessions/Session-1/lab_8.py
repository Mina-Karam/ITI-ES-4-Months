x = b"A02000205D055D"

print(x)
print(x[0]) #print asci code

y = bytearray(5)
print(y)

z = memoryview(y)
print(z)

byte_str = bytes(b'abc') #Un-mutilbe 
print(byte_str)

#byte_str[0] = 10 # Error

byte = bytearray(b'abc') #mutilbe 

my_bytes = bytearray(b'\x00\x01\x02')

print(my_bytes)

my_bytes[0] = 255

print(my_bytes)

print(b'\xD9\x85\xD9\x8A\xD9\x86\xD8\xA7\x20\xD9\x83\xD8\xB1\xD9\x85'.decode('utf-8'))

print(b'\xC2\xA9\x20\xF0\x9D\x8C\x86\x20\xE2\x98\x83'.decode('utf-8'))
print(b'\xC2\xA9\x20\xF0\x9D\x8C\x86\x20\xE2\x98\x83'.decode('latin-1'))
