#include <stdio.h>
int b;
int a;
int main()
{
    printf("masukkan angka pertama : ");
    scanf("%d", &a);
    printf("masukkan angka kedua : ");
    scanf("%d", &b);
    if (a < b)
    {
        printf("%d %d", a, b);
    }
    else
    {
        printf("%d %d", b, a);
    }
    return 0;
}
