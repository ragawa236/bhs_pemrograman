def bagi(a, b):
    try:
        hasil = a / b
    except ZeroDivisionError:
        return "Error: Tidak bisa membagi dengan nol"
    return hasil

# Contoh penggunaan
print(bagi(10, 2))  # Output: 5.0
print(bagi(10, 0))  # Output: Error: Tidak bisa membagi dengan nol
