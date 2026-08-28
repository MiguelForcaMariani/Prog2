#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

void valida(char num[13], float *n){
    do{
    printf("\nDigite o valor %s: ", num);
    scanf("%f", n);
    if(isnan(*n)){
        printf("\nValor inválido, digite novamente");
    }
    }while(isnan(*n));
}

void multiplicar(float x, float y, float *r){
    *r = 0;
    for(int i = 1; i <= y; i++){
        *r += x;
    }
}

void potencia(float x, float y, float *r){
    *r = 1;
    for(int i = 1; i <= y; i++){
        float temp;
        multiplicar(*r, x, &temp);
        *r = temp;
    }
}

void main(){
    SetConsoleOutputCP(65001);
     float x, y, r = 0;
    char num[13];
    strcpy(num, "da base");
    valida(num, &x);
    strcpy(num, "do expoênte");
    valida(num, &y);
    potencia(x, y, &r);
    printf("O valor da potênciação é %.2f", r);
}