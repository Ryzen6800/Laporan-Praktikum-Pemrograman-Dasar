namaDepan = str(input())
namaBelakang = str(input())
namaLengkap = namaDepan + " " + namaBelakang
panjangString = len(list(namaLengkap))

for i in range(len(namaLengkap)):
    if namaLengkap[i] == " ":
        panjangString = namaLengkap.replace(" ", "")
        
print(f"Nama Lengkap: {namaLengkap}")
print(f"Panjang Nama(tanpa spasi): {len(panjangString)}")