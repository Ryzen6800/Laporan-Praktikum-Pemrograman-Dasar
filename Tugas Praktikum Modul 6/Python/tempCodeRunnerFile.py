import numpy as np

ukuranMatriks = int(input())
matriksA = []
matriksB = []

mA = str(input())
for i in range(ukuranMatriks):
    nilaiMatriksA = list(map(int, input().split()))
    matriksA.append(nilaiMatriksA)
    
mB = str(input())
for i in range(ukuranMatriks):
    nilaiMatriksB = list(map(int, input().split()))
    matriksB.append(nilaiMatriksB)

matriksA = np.array(matriksA)
matriksB = np.array(matriksB)

perkalianMatriks = np.dot(matriksA, matriksB)

print("Matriks AXB")
for matriksJadi in perkalianMatriks:
    print(*matriksJadi)


