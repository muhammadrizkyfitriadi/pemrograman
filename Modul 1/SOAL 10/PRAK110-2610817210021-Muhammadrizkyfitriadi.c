#include <stdio.h>
#include <math.h>

int a = 12;
int c = 5;
int main()
{
    int b = sqrt(a * a + c * c);
    int keliling = a + b + c;
    int luas = (a * c) / 2;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", a);
    printf("Sisi B = %d cm\n", b);
    printf("Sisi C = %d cm\n", c);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm² \n", luas);
    return 0;
}