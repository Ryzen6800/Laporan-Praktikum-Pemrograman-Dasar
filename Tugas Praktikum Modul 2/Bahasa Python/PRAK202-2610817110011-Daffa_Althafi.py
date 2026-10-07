first_value = float(input("Enter the first value: "))
second_value = float(input("Enter the second value: "))

for i in range(2):
    summary = first_value + second_value
    print(f"The sum of the first value {first_value:.2f} and second value {second_value:.2f} is {summary:.2f}\n")
    
    if (i < 2 - 1):
        first_value = float(input("Enter the first value: "))
        second_value = float(input("Enter the second value: ")) 
