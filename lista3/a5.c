#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    int n=0, s=0;
    do{
    if(n<0){
        printf("Número invalido, ele precisa ser positivo\n");
    }
    printf("Digite um número:");
    scanf("%d", &n);
    }while(n<0);
    for(n; n>=0; n--){
        s+=n;
    }
    printf("O fatorial desse número é: %d", s);
}