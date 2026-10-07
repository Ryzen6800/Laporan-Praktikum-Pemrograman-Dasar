total_seconds = int(input("input number of seconds: "))

for i in range(5):
    day = total_seconds // 86400
    total_seconds = total_seconds % 86400

    clock = total_seconds // 3600
    total_seconds = total_seconds % 3600

    minute = total_seconds // 60
    second = total_seconds % 60

    if day > 0:
        print(f"{day} day {clock:02d}:{minute:02d}:{second:02d}")
    else:
        print(f"{clock:02d}:{minute:02d}:{second:02d}")
    
    if (i < 5 - 1):
        total_seconds = int(input("input number of seconds: "))