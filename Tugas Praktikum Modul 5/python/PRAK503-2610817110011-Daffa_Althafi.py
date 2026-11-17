def maksimal(a, b):
    maks = a
    if b > maks:
        maks = b
    return maks
    

def minimal(a, b):
    minim = a
    if b < minim:
        minim = b
    return minim

batas = 0
maks = -100000
minim = 100000
bilangan = int(input(""))

while batas < bilangan:
    nilai = int(input(""))
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1

print(maks, minim)