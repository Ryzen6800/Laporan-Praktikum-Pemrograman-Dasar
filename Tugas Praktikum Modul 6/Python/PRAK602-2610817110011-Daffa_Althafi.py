x = input().split()
ruangan = int(input())
zetsu = list(map(int, input().split()))

for i in range(ruangan):
    jumlah_zetsu = zetsu[i] * (i + 1)
    print(jumlah_zetsu, end = " ")  