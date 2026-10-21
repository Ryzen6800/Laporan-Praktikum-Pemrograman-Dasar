number1 = int(input("Input 1: "))
number2 = int(input("Input 2: "))

if number1 < number2:
    total = number2 - number1 + 1

    for i in range(total):
        print(number1 + i, number2 - i, end=" ")

        if i < total - 1:
            print("-", end=" ")

else:
    total = number1 - number2 + 1

    for i in range(total):
        print(number1 - i, number2 + i, end=" ")

        if i < total - 1:
            print("-", end=" ")

print()

