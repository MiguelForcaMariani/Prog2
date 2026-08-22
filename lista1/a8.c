#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    float sm, s, qs;
    printf("Digite o valor do salário mínimo:");
    scanf("%f", &sm);
    printf("Digite qual o salário da pessoa:");
    scanf("%f", &s);
    qs = s/sm;
    printf("Essa pessoa recebe %.2f salários mínimos", qs);
}