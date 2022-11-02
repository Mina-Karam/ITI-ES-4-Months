str1 = 'Hello مينا world'

print ("Byte Conversion :" +str(bytes(str1,'cp1256',errors = 'ignore'))  )

print ("Byte Conversion :" +str(bytes(str1,'ascii',errors = 'ignore'))  )
#relace error with question martk
print ("Byte Conversion :" +str(bytes(str1,'ascii',errors = 'replace'))  )
# stop  excution 
#print ("Byte Conversion :" +str(bytes(str1,'ascii',errors = 'strict'))  )

print ("Byte Conversion :" +str(bytes(str1,'cp1256',errors = 'replace'),'cp1256'  ) )

# parsing data from the user 

data = "\x68\x65\x6c\x6c\x6f"

print (data)

print ("Byte Conversion :" +str(bytes(data,'ascii',errors = 'ignore'))  )