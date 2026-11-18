baris, kolom = map(int, input().split())
nilai = list(map(int, input().split()))

for i in range(baris):
    matriks = []
    for j in range(kolom):
        matriks.append(nilai[i * kolom + j])
        
    print(*matriks) 