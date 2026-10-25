#include <stdio.h>
int a;
int main()
{
    printf("masukkan angka : ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("positif");
    }
    else if (a < 0)
    {
        printf("negatif");
    }
    else
    {
        printf("nol");
    }
    return 0;
}