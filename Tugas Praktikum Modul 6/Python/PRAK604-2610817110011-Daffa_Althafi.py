kode = input()
pesan = input()

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu!")
else:
    kodeRahasia = ''
    bintang = 0
    pagar = 0
    for i in range(len(kode)):
        if kode[i] == pesan[i]:
            if (kode[i] ) == ' ':
                kodeRahasia += ' '
            else:
                kodeRahasia += '*'
                bintang += 1
        else:
            kodeRahasia += '#'
            pagar += 1

    print(kodeRahasia)
    print(f"'*' = {bintang}")
    print(f"'#' = {pagar}")
    
    if bintang < pagar:
        print("Pesan palsu")
    else:
        print("Pesan asli")