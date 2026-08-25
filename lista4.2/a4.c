#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

float valida(char num[13], float *n){
    do{
    printf("\nDigite o valor %s: ", num);
    scanf("%f", n);
    if(isnan(*n)){
        printf("\nValor inválido, digite novamente");
    }
    }while(isnan(*n));
}

float multiplicar(float x, float y, float *r){
    *r = 0;
    for(int i = 1; i <= y; i++){
        *r += x;
    }
}

float potencia(float x, float y, float *r){
    *r = 1;
    for(int i = 1; i <= y; i++){
        float temp;
        multiplicar(*r, x, &temp);
        *r = temp;
    }
}

int main(void){
    SetConsoleOutputCP(65001);
     float x, y, r = 0;
    char num[13];
    strcpy(num, "da base");
    valida(num, &x);
    strcpy(num, "do expoênte");
    valida(num, &y);
    potencia(x, y, &r);
    printf("O valor da potênciação é %.2f", r);
return 0;
}