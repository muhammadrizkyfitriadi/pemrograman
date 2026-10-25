a = int(input("masukkan angka sembarang : "))
if 0 < a < 10 :
    print("satuan")
elif 10 <= a < 20 :
    print("belasan")
elif 20 <= a <=99 :
    print("puluhan")
elif a > 99 :
    print("Anda Menginput Melebihi Limit Bilangan ")
else :
    print("nol")