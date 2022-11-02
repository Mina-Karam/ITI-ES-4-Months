# slicing create local copies 
import time 
# printing bytes 
for n in (10000 , 20000 , 30000 , 40000 , 50000):
	data = 'A'*n
	start =time.time()
	while data:
		data = data[1:]
	print ('bytes ' , n  ,time.time() - start)


for n in (10000 , 20000 , 30000 , 40000 , 50000):
	data = 'A'*n
	start =time.time()
	data = bytearray(data,'utf-8')
	# no copies edit will occur in the same place 
	
	data = memoryview(data)
	
	while data:
		data = data[1:]
	print ('memory view  ' , n  ,time.time() - start)