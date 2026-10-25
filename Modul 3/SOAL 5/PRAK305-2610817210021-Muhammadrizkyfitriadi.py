waktu = int(input("masukkan waktu : "))

hari = waktu // 86400
sisa_detik = waktu % 86400

jam = sisa_detik // 3600
sisa_detik %= 3600

menit = sisa_detik // 60
detik = sisa_detik % 60

if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")