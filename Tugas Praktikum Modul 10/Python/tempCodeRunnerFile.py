def disk(n):
    if n == 1:
        return 1
    else:
        return 2 * disk(n - 1) + 1
    
for i in range(2):
    n = int(input("Input disk: "))
    result = disk(n)
    
    print(f"The minimum number of steps for {n} disks is {result}")
    print("\n")