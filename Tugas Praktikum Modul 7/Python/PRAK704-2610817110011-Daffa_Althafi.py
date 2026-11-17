deskripsi = input()

if (len(deskripsi)) > 20:
    print(deskripsi[:20] + "...")
else:
    print(deskripsi) 