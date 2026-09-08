#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int pesquisar(int n, int v[]){
    for(int i = 0; i < 100; i++){
        if(v[i] == n){
            return 1;
        }
    }
    return 0;
}

void remover(int v1[], int v2[], int v3[], int *t3){
    for(int i = 0; i < 100; i++){
        if(pesquisar(v2[i], v1)){
            v3[*t3] = v2[i];
            v2[i] = 0;
            (*t3)++;
        }
    }
}

void gerar(int v[]){
    for(int i = 0; i < 100; 0){
        int n = (rand()%100)+1;
        if(pesquisar(n, v)){
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
    int v1[100], v2[100], v3[100], t3 = 0;
    gerar(v1);
    gerar(v2);
    remover(v1, v2, v3, &t3);
    printf("\nvetor 1:\n");
    imprimir(v1, 100);
    printf("\nvetor 2:\n");
    imprimir(v2, 100);
    printf("\nvetor 3:\n");
    imprimir(v3, t3);
}