n1 = int(input("n1: "))
n2 = int(input("n2: "))

total = 0

for i in range(1, n1 + 1):
    sum = 0
    
    for j in range(i, 0, -1):
        print(f"({j} * {n2})", end=" ")
        
        sum += j * n2
        
        if j > 1:
            print(f"+", end=" ")
            
    print(f"= {sum}")
    total += sum
    
print(total)