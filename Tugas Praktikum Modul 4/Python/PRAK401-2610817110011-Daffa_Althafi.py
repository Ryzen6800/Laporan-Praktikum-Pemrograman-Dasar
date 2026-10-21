variable_number = int(input("input a number: "))
variable_symbol = input("input a symbol: ")

for i in range(1, 51):
    if i % variable_number == 0:
        print(variable_symbol, end=" ")
    else:
        print(i, end=" ")