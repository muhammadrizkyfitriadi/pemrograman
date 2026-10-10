#include <stdio.h>

float jari_jari;
float tinggi;
float phi = (22.0 / 7.0);
int main()
{
    scanf("%f %f", &jari_jari, &tinggi);
    float volume = phi * jari_jari * jari_jari * tinggi;
    float luas = 2 * phi * jari_jari * (jari_jari + tinggi);
    float keliling = 2 * phi * jari_jari;
    printf("Volume : %.2f\n", volume);
    printf("Luas : %.2f\n", luas);
    printf("Keliling : %.2f\n", keliling);
    return 0;
}