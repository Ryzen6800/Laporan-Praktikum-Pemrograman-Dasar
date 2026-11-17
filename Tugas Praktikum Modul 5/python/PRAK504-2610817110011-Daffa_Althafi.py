def reverse(number):
    reverse_number = 0
    while number > 0:
        digit = number % 10
        reverse_number = reverse_number * 10 + digit
        number = number // 10
    return reverse_number


a, b = map(int, input("").split())
a = reverse(a)
b = reverse(b)
c = a + b
print(reverse(c))