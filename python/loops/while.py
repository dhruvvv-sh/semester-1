#printing oh 10 times
count  = 1
while count<=10:
    print("hello")
    count = count + 1
print(count)
#printing numbers from user input range
q = int(input("enter range num1:"))
w = int(input("enter ending extreme:"))
while q<=w:
    print(q)
    q = q + 1
#printing the multi table of a number
e = int(input("enter the number :"))
i = 1
while i<=10:
    product = e*i
    print(f"{e} X {i} = {product}")
    i = i + 1
#bubble sort
marks = [10,11,30,15,80,45,60,35]
n = len(marks)
# Using range to access indices
for i in range(n-1):  # 'i' will take values from 0 to n-2
    for j in range(n-1-i):  # 'j' goes from 0 to n-2-i (avoiding out-of-bounds)
        if marks[j] > marks[j+1]:  # Compare adjacent elements by their indices
            # Swap using a temporary variable
            temp = marks[j]
            marks[j] = marks[j+1]
            marks[j+1] = temp

print(marks)