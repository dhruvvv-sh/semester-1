def sum(x,y):
    sum = x + y
    return sum
def avg(x,y):
    w = (x + y)/2
    return w
x = int(input("enter num1:"))
y = int(input("enter num2:"))
z = sum(x,y)
q = avg(x,y)
print("sum is :",z)
print("avg is:",q)