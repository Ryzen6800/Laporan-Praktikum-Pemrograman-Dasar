ukuranMatriks = int(input())

label = input()

matriksA = []
matriksB = []
hasil = []

for i in range(ukuranMatriks):
    nilaiMatriksA = list(map(int, input().split()))     
    matriksA.append(nilaiMatriksA)

label = input()

for i in range(ukuranMatriks):
    nilaiMatriksB = list(map(int, input().split()))
    matriksB.append(nilaiMatriksB)

for i in range(ukuranMatriks):
    barisHasil = []

    for j in range(ukuranMatriks):
        total = 0

        for k in range(ukuranMatriks):
            total += matriksA[i][k] * matriksB[k][j]

        barisHasil.append(total)

    hasil.append(barisHasil)

print("Matriks AXB")

for i in range(ukuranMatriks):
    for j in range(ukuranMatriks):
        print(hasil[i][j], end=" ")
    print()