baris, kolom = map(int, input().split())

if (baris != kolom):
    print("Jumlah tidak sama")
else:
    angkaBaris1 = list(map(int, input().split()))
    angkaBaris2 = list(map(int, input().split()))

    for i in range(baris):
        hasilPerkalian = angkaBaris1[i] * angkaBaris2[i]
        print(hasilPerkalian, end = " ")        