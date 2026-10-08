#include <stdio.h>

int sepatu_A = 400000;
int sepatu_B = 350000;

int main()
{
    int diskon_A = sepatu_A - (sepatu_A * 13 / 100);
    int diskon_B = sepatu_B - (sepatu_B * 21 / 100);
    printf("Harga sepatu A adalah %d\n", sepatu_A);
    printf("Harga sepatu B adalah %d\n", sepatu_B);
    printf("sepatu A mendapat diskon 13\%%, sehingga harganya menjadi %d\n", diskon_A);
    printf("sepatu B mendapat diskon 21\%%, sehingga harganya menjadi %d\n", diskon_B);
    return 0;
}