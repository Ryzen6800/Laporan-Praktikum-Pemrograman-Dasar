def addition(number1, number2):
    return number1 + number2

def subtraction(number1, number2):
    return number1 - number2

def multiplication(number1, number2):
    return number1 * number2

def division(number1, number2):
    return number1 / number2

while True:
    print("program1: Addition")
    print("program2: Subtraction")
    print("program3: Multiplication")
    print("program4: Division")
    print("program5: Exit\n")
    program_choice = input("Select program 1 - 5: ")
    
    if program_choice == "5":
        print("Thank you for using the calculator Daffa Althafi")
        break
    
    elif program_choice in ("1", "2", "3", "4"):
        number1 = int(input("number1: "))
        number2 = int(input("number2: "))
        
        if program_choice == "1":
            print(addition(number1, number2), "\n")
            
        elif program_choice == "2":
            print(subtraction(number1, number2), "\n")
            
        elif program_choice == "3":
            print(f"{multiplication(number1, number2):.2f}", "\n")
        
        elif program_choice == "4":
            if number2 != 0:
                print(division(number1, number2), "\n")
            
            else:
                print("Error, you cannot divide a number by zero\n")
    else:
        print("Invalid input, try again\n")
