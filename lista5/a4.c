#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void gerar(int v[]){
    for(int i = 0; i < 20; i++){
        v[i] = (rand()%100)+1;
    }
}

void separar(int v[], int pares[], int impares[], int *tami, int *tamp){
    for(int i = 0; i < 20; i++){
        if(v[i]%2 == 0){
            pares[*tamp] = v[i];
            (*tamp)++;
        }else{
            impares[*tami] = v[i];
            (*tami)++;
        }
    }
}

void imprimir(int v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d, ", v[i]);
    }
}

int main(void) {
SetConsoleOutputCP(65001);
    srand((unsigned)time(NULL));
    int v[20], impares[20], pares[20], tami = 0, tamp = 0;
    gerar(v);
    separar(v, pares, impares, &tami, &tamp);
    printf("impares: ");
    imprimir(impares, tami);
    printf("pares: ");
    imprimir(pares, tamp);
}