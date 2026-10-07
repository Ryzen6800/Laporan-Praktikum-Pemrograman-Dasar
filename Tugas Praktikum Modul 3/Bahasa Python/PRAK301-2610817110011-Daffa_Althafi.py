variable_1 = int(input("input the value of variable one: "))
variable_2 = int(input("input the value of variable two: "))

for i in range(3):
    if (variable_1 > variable_2):
        print(variable_2, variable_1, "\n")
    else:
        print(variable_1, variable_2, "\n")

    if (i < 3 - 1 ):
        variable_1 = int(input("input the value of variable one: "))
        variable_2 = int(input("input the value of variable two: "))