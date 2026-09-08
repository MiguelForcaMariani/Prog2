#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int pesquisar(int n, int v[]){
    for(int i = 0; i < 100; i++){
        if(v[i] == n){
            return 1;
        }else{
            return 0;
        }
    }
}

void gerar(int v[]){
    for(int i = 0; i < 100; 0){
        int n = (rand()%100)+1; 
        if(!pesquisar(n, v)){
            v[i] = n;
            i++;
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
    int v[100];
    gerar(v);
    imprimir(v, 100);
}