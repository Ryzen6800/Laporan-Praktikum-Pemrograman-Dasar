def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

for i in range(2):
    n = int(input("Input a number: "))
    
    for j in range(n):
        print(f"{fibonacci(j)}", end=" ")
    print()
        
