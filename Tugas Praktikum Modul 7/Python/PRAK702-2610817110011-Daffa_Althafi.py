for i in range(3):
    kata = str(input())
    kata = kata.lower()
    revKata = kata[::-1 ]
    
    if kata != revKata:
        print(f"Kata '{kata}' bukan palindrom")
    else:
        print(f"Kata '{kata}' adalah palindrom")