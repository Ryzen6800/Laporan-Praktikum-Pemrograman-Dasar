value_A = float(input("Enter the A values: "))
value_B = float(input("Enter the B values: ")) 
value_I = float(input("Enter the I values: "))
value_J = float(input("Enter the J values: "))
value_X = float(input("Enter the X values: "))
value_Y = float(input("Enter the Y values: "))

for i in range(2):
    sum = ((value_A - value_B) * value_I / value_J) - (value_X + value_Y)
    print(f"Result is {sum:.3f}\n")
    
    if (i < 2 - 1):
        value_A = float(input("Enter the A values: "))
        value_B = float(input("Enter the B values: "))
        value_I = float(input("Enter the I values: "))
        value_J = float(input("Enter the J values: "))
        value_X = float(input("Enter the X values: "))
        value_Y = float(input("Enter the Y values: "))