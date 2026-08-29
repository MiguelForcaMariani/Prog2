#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    float f, c;
    printf("Digite a temperatura em F°:");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("A temperatura em celsius é: %.2f", c);
}