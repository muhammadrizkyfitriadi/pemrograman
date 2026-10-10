phi = (22.0 / 7.0)
jari_jariDANtinggi = []

while len(jari_jariDANtinggi) < 2:
    baris = input().split()
    jari_jariDANtinggi.extend(baris)


jari_jari, tinggi = map(float, jari_jariDANtinggi[:2])

volume = phi * jari_jari * jari_jari * tinggi
luas = 2 * phi * jari_jari * (jari_jari + tinggi)
keliling = 2 * phi * jari_jari

print(f"Volume : {volume:.2f}")
print(f"Luas : {luas:.2f}")
print(f"Keliling : {keliling:.2f}")