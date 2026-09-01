#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void imprimir(int v[]){
    for(int i = 0; i < 20; i++){
        printf("%d, ", v[i]);
    }
}

void preencher(int v[]){
    for(int i = 0; i < 20; i++){
        if((i+1)%2 == 0){
            v[i] = pow(i+1, 2);
        }else{
            v[i] = pow(i+1, 3);
        }
    }
}

int main(void) {
SetConsoleOutputCP(65001);
int v[20];
preencher(v);
imprimir(v);
}