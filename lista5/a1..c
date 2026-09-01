#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void imprimir(int v[]){
    for(int i = 0; i < 100; i++){
        printf("%d, ", v[i]);
    }
}

void preencher(int v[]){
    for(int i = 0; i < 100; i++){
        v[i] = 100 - i;
    }
}

int main(void) {
SetConsoleOutputCP(65001);
int v[100];
preencher(v);
imprimir(v);
}