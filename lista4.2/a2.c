#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void valida(char eixo[9], float *n){
    do{
    printf("\nDigite o valor do eixo das %s: ", eixo);
    scanf("%f", n);
    if(isnan(*n)){
        printf("\nValor inválido, digite novamente");
    }
    }while(isnan(*n));
}

void coordenada(float *x, float *y){
    char eixo[9];
    strcpy(eixo, "abscissas");
    valida(eixo, x);
    strcpy(eixo, "ordenadas");
    valida(eixo, y);
}

void distancia(float x1, float y1, float x2, float y2, float *d){
    *d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main(void){
    SetConsoleOutputCP(65001);
    float x1, y1, x2, y2, x3, y3, d1, d2, d3, d;
    printf("\nCoordenadas 1:");
    coordenada(&x1, &y1);
    printf("\nCoordenadas 2:");
    coordenada(&x2, &y2);
    printf("\nCoordenadas 3:");
    coordenada(&x3, &y3);
    distancia(x1, y1, x2, y2, &d1);
    distancia(x1, y1, x3, y3, &d2);
    distancia(x2, y2, x3, y3, &d3);
    d = d1+d2+d3;
    printf("\nO perímetro do triangulo é: %.2f", d);
}