#include <stdio.h>

int pasukan = 958730;
int pahlawan = 5;
int main()
{
    int pasukan_per_pahlawan = pasukan / pahlawan;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);
    return 0;
}