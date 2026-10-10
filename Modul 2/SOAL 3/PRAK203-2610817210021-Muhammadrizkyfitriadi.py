angka = []

while len(angka) < 6:
    baris = input().split()
    angka.extend(baris)

a, b, i, j, x, y = map(float, angka[:6])

hasil = (a - b) * (i / j) - (x + y)

print(f"{hasil:.3f}")