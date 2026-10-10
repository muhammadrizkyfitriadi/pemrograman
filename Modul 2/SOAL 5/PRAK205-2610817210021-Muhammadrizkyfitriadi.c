#include <stdio.h>
#include <math.h>

int a;
int b;
int main()
{
    scanf("%d %d", &a, &b);
    int c = sqrt((b * b) - (a * a));
    int keliling = a + b + c;
    int luas = 0.5 * a * c;

    printf("Alas : %d cm\n", c);
    printf("Tinggi : %d cm\n", a);
    printf("Keliling : %d cm\n", keliling);
    printf("Luas : %d cm^2\n", luas);
    return 0;
}