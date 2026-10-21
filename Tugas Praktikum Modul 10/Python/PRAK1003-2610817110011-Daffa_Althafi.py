def total_digit(number):
    if number == 0:
        return 0
    else:
        return (number % 10) + total_digit(number // 10)

for i in range(2):
    number = int(input("Input number: "))
    result = total_digit(number)
    
    print(f"Total digit of {number} is {result}")
    print()