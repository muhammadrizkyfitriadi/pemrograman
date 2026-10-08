#include <stdio.h>

float a = 4;
float b = 8;
float c = 3;

int main()
{
    float hasil = a * b / c;
    printf("Variabel a bernilai %d\n", (int)a);
    printf("Variabel b bernilai %d\n", (int)b);
    printf("Variabel c bernilai %d\n", (int)c);
    printf("Hasil dari a dikali b dibagi c adalah %f\n", hasil);
    return 0;
}