value = int(input("input the value please: "))

for i in range(3):
    if (value > 0):
        print("positive\n")
    elif (value < 0):
        print("negative\n")
    else:
        print("zero\n")

    if (i < 3 - 1):
        value =  int(input("input the value please: "))