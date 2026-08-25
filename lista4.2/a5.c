#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#include <math.h>

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
    float x, y, r = 0, of;
    int o;
    char num[13];
    do{
    printf("\n1-adição\n2-subtração\n3-divisão\n4-multiplicação\n5-potenciação\n0-sair");
    strcpy(num, "da opção");
    valida(num, &of);
    o = (int)of;
    switch (o){
    case 1:
        strcpy(num, "do número 1");
        valida(num, &x);
        strcpy(num, "do número 2");
        valida(num, &y);
        r = x+y;
        break;
    case 2:
        strcpy(num, "do número 1");
        valida(num, &x);
        strcpy(num, "do número 2");
        valida(num, &y);
        r = x-y;
        break;
    case 3:
        strcpy(num, "do número 1");
        valida(num, &x);
        strcpy(num, "do número 2");
        valida(num, &y);
        r = x/y;
        break;
    case 4:
        strcpy(num, "do número 1");
        valida(num, &x);
        strcpy(num, "do número 2");
        valida(num, &y);
        multiplicar(x, y, &r);
        break;
    case 5:
        strcpy(num, "da base");
        valida(num, &x);
        strcpy(num, "do expoênte");
        valida(num, &y);
        potencia(x, y, &r);
        break;
    }
    if(o != 0){
        printf("O resultado é: %.2f\n", r);
        system("pause");
    }
    }while(o != 0);
return 0;
}