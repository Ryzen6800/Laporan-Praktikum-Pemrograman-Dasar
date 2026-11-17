for i in range(3):
    kata = str(input())
    revKata = kata[::-1 ]
    
    if kata != revKata:
        print(f"Kata '{kata}' bukan palindrom")
    else:
        print(f"Kata '{kata}' adalah palindrom")