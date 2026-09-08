#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void m(float v[], float *media, int max){
    for(int i = 0; i < max; i++){
        *media += v[i];
    }
    *media = *media/max;
}

void mm(float *maior, float *menor, float v[], int max){
    for(int i = 0; i < max; i++){
        if(v[i] > *maior){
            *maior = v[i];
        }
        if(v[i] < *menor){
            *menor = v[i];
        }
    }
}

void inserir(float v[], int *max){
    float a;
    printf("Digite o as alturas ou 0 para encerrar.");
    do{
    printf("\nDigite a altura do atleta nº %d: ", *max+1);
    if(scanf("%f", &a) <= 0){
        while(getchar() != '\n');
        a = -1;
    }
    if(a < 0 || a > 2.72){
        printf("\nValor digitado inválido.\n");
        system("PAUSE");
    }else if(a != 0){
        v[*max] = a;
        (*max)++;
    }
    }while(a != 0 && *max < 1000);
}

int main(void) {
SetConsoleOutputCP(65001);
    float v[1000], maior = 0, menor = 3, media = 0;
    int max = 0;
    inserir(v, &max);
    mm(&maior, &menor, v, max);
    m(v, &media, max);
    printf("\nO maior atleta tem %.2f metros e o menor tem %.2f metros.", maior, menor);
    printf("\nA média de altura é %.2f metros", media);
}