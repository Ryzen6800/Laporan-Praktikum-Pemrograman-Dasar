a = 4
b = 5
c = 7
fence_per_meter = 85000
perimeter_of_land =  a + b + c
cost_fence = perimeter_of_land * fence_per_meter

print(f"Length of side {a}")
print(f"Length of side {b}")
print(f"Length of side {c}")
print(f"Perimeter of the land is {perimeter_of_land}")
print(f"Price of land per meter is {fence_per_meter:.0f}")
print(f"Total cost of the fence is {cost_fence:.0f}")