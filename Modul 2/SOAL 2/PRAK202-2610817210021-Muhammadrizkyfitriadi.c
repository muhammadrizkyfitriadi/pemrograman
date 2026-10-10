#include <stdio.h>

float nilai1;
float nilai2;

int main()
{
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai2);
    float total = nilai1 + nilai2;
    printf("Hasil Dari Penjumlahan Nilai Pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", nilai1, nilai2, total);
    return 0;
}