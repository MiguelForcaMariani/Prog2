#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    float a, d, mp, dp;
    int cd, ct;
    printf("Digite por quantos anos a pessoa fuma:");
    scanf("%f", &a);
    printf("Digite a quantidade cigarros fumados por dia:");
    scanf("%f", &cd);
    d = a*365;
    ct = cd*d;
    mp = ct*10;
    dp = mp/1440;
    printf("A quantidade de dias de vida perdidos é: %.2f", dp);
}
