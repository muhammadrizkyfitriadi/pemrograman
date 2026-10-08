#include <stdio.h>

int putaran = 5;
int jarak = 14;

int main()
{
    float jari_jari = jarak / (2 * 3.14 * putaran);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", putaran);
    printf("Jarak yang ditempuh Pak Dengklek = %d Kilometer\n", jarak);
    printf(" \n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);
    return 0;
}