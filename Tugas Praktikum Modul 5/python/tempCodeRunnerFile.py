def biodata(tahunLahir, Nama, AsalDaerah):
    tahunSekarang = 2020
    umur = tahunSekarang - tahunLahir
    print(f"Perkenalkan Nama Saya: {nama}");
    print(f"Umur Saya: {umur}");
    print(f"Saya Adalah Angkatan: {tahunSekarang}");
    print(f"Asal Saya dari: {AsalDaerah}");
    
tahunLahir = int(input(""))
nama = str(input(""))
asal = str(input(""))
biodata(tahunLahir, nama, asal)