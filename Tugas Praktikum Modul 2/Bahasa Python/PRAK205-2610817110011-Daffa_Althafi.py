import math

height_of_triangle = int(input("Enter the value of height triangle: "))
hypotenus_of_triangle = int(input("Enter the value of hypotenus triangle: "))

for i in range(2):
    base_of_triangle = math.sqrt(pow(hypotenus_of_triangle, 2) - pow(height_of_triangle, 2))
    perimeter_of_triangle = hypotenus_of_triangle + height_of_triangle + base_of_triangle
    area_of_triangle = (base_of_triangle * height_of_triangle) / 2

    print(f"base of triangle = {base_of_triangle}")
    print(f"height of tiangle = {height_of_triangle}")
    print(f"perimeter of triangle = {perimeter_of_triangle}")
    print(f"area of triangle = {area_of_triangle}\n")
    
    if (i < 2 - 1):
        height_of_triangle = int(input("Enter the value of height triangle: "))
        hypotenus_of_triangle = int(input("Enter the value of hypotenus triangle: "))
