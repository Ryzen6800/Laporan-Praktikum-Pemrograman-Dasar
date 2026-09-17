from math import sqrt
A = 5
C = 12
height = C
base = A
hypotenuse = sqrt(pow(height, 2) + pow(base, 2))
perimeter = height + base + hypotenuse
area = (height * base) / 2

print(f"Height of the triangle: {height}")
print(f"Base of the triangle: {base}")
print(f"Hypotenuse of the triangle: {hypotenuse:.0f}")
print(f"Perimeter of the triangle: {perimeter:.0f}")
print(f"Area of the triangle: {area:.0f}")
