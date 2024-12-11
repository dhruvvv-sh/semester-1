#slicing
str = "hi my name is dhruv"
l = len(str)
print(l)
e = int(input("enter intial limit: "))
t = int(input("enter the ending limit of the string slicing:"))
print(str[e:t])
#concatenation
str1 = "hello"
str2 = "my name is dhruv"
hello = str1 + " " + str2 
print(hello)
str5 = str2.capitalize()
print(str5)
str6 = hello.find("llo")
str7 = hello.count("hello")
print(str6)
print(str7)