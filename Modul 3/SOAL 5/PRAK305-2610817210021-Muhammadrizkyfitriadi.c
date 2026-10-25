#include <stdio.h>
int waktu;
int main()
{
    printf("masukkan waktu : ");
    scanf("%d", &waktu);
    int hari = waktu / 86400;
    int sisa_detik = waktu % 86400;

    int jam = sisa_detik / 3600;
    sisa_detik %= 3600;

    int menit = sisa_detik / 60;
    int detik = sisa_detik % 60;

    if (hari > 0)
    {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    }
    else
    {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }
    return 0;
}