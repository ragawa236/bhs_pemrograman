#function
def salam(nama):
    return f"Halo, {nama}!"

print(salam("Budi"))


#recursive
def faktorial(n):
    if n == 0:
        return 1
    else:
        return n * faktorial(n - 1)

print(faktorial(5))
