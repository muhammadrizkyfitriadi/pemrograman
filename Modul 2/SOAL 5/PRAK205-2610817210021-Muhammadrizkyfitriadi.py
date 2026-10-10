import math
a_b = []

while len(a_b) < 2:
    baris = input().split()
    a_b.extend(baris)

a, b = map(int, a_b[:2])

c = int(math.sqrt((b*b)-(a*a)))
keliling = a + b + c
luas = int(0.5 * a * c)

print(f"Alas : {c} cm")
print(f"Tinggi : {a} cm")
print(f"Keliling :{keliling} cm")
print(f"Luas : {luas} cm^2")