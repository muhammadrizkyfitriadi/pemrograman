#include <stdio.h>

int main()
{
    char nama[100], nim[20], ttl[100], alamat[100], hobi[100], no_hp[15];
    int kelas;
    printf("Nama                  : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM                   : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel         : ");
    fgets(nim, sizeof(kelas), stdin);

    printf("Tempat/Tanggal Lahir  : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat                : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby                 : ");
    fgets(hobi, sizeof(hobi), stdin);

    printf("No. HP                : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("\nNama                  : %s", nama);
    printf("NIM                   : %s", nim);
    printf("Kelas Paralel         : %d", kelas);
    printf("Tempat/Tanggal Lahir  : %s", ttl);
    printf("Alamat                : %s", alamat);
    printf("Hobby                 : %s", hobi);
    printf("No. HP                : %s", no_hp);

    return 0;
}