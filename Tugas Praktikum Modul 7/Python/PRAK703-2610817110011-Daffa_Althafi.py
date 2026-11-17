kalimat = str(input("Kalimat: "))
jumlahVokal = 0
jumlahKonsonan = 0

for i in kalimat:
    if i in "aiueo" or i in "AIUEO":
        jumlahVokal  += 1
    elif i in "zxcvbnmsdfghjklqwrtyp" or i in "zxcvbnmsdfghjklqwrtyp".upper():
        jumlahKonsonan += 1
        
print(f"Jumlah Vokal: {jumlahVokal}")
print(f"Jumlah Konsonan: {jumlahKonsonan}")