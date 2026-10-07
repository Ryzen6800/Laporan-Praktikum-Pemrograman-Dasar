radius_of_circle = float(input("input radius of a circle: "))
vessel_height = float(input("input vessel height: "))
pi = 22.0 / 7.0

for i in range(2):
    volume = pi * radius_of_circle * radius_of_circle * vessel_height
    wide = 2 * pi * radius_of_circle * (radius_of_circle + vessel_height)
    around = 2 * pi * radius_of_circle

    print(f"vessel volume = {volume:.2f}")
    print(f"Surface area of vessel = {wide:.2f}")
    print(f"circumference of the vessel = {around:.2f}\n")
    
    if (i < 2 - 1):
        radius_of_circle = float(input("input radius of a circle: "))
        vessel_height = float(input("input vessel height: "))
        pi = 22.0 / 7.0