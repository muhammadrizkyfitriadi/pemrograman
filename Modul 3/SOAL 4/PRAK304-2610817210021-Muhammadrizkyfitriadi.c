#include <stdio.h>
int a;
int main()
{
    printf("masukkan angka sembarang : ");
    scanf("%d", &a);
    if (a > 0 & a < 10)
    {
        printf("satuan");
    }
    else if (a >= 10 & a < 20)
    {
        printf("belasan");
    }
    else if (a >= 20 & a <= 99)
    {
        printf("puluhan");
    }
    else if (a > 99)
    {
        printf("Anda Menginput Melebihi Limit Bilangan ");
    }
    else
    {
        printf("nol");
    }
    return 0;
}