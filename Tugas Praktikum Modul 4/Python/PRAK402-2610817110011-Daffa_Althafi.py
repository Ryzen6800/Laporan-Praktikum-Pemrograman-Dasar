number = int(input("enter a number: "))

for i in range(1, number + 1, 2):
    print(i, end=" ")
print()

if number % 2 == 0:
    even = number
else:
    even = number - 1
    
for i in range(even, 1, -2):
    print(i, end=" ")
print()
