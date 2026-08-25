#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    int i, q, n, m;
    printf("Digite a quantidade de números a ser lida:");
    scanf("%d", &q);
    for(i=q; i>=1; i--){
        do{
            printf("\nDigite um número a ser lido:");
            scanf("%d", &n);
            if(n<0){
            printf("\nNúmero inválido, insira novamente.");
            }else if(n<m){
            m=n;
            }
        }while(n<0);
    }
    printf("O menor deles é: %d", m);
}