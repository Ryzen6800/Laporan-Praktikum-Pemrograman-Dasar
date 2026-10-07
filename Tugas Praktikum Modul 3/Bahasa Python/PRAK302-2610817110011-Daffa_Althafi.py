grade = int(input("enter your grade: "))

for i in range(5):
    if (grade >= 80):
        print("A\n")
    elif (grade >= 70):
        print("B\n")
    elif (grade >= 60):
        print("C\n")
    elif (grade >= 50):
        print("D\n")
    else:
        print("E\n")
    
    if (i < 5 - 1):
        grade = int(input("enter your grade: "))