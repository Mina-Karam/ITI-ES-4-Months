# Memory view is function which receiev
# array receive object of  bytes or byte array 
# Use python buffer protocol 
# return object address 

byte_array = bytearray('Mina Karam','utf-8')

memoryview_1 = memoryview(byte_array)
memoryview_1[0] = 0xff
print (byte_array)
# print the adress of memory location for byte_array

print ("The address of byte_array = " + str(memoryview_1) )