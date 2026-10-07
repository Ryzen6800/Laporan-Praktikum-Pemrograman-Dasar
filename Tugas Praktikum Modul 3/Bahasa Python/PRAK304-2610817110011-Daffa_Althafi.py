value = int(input("enter the value: "))

for i in range(5):
    if (value == 0):
        print("Zero\n")
    elif (value > 0 and value < 10):
        print("Ones\n")
    elif (value > 9 and value < 20):
        print("Teens\n")
    elif (value > 19 and value < 100):
        print("Tens\n")
    else:
        print("out of range\n")
        
    if (i < 5 - 1):
        value = int(input("enter the value: "))   


