#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    int a;
    printf("Digite o número:");
    scanf("%d", &a);
    if(a%10 == 0){
        printf("É divisível por 10\n");
    };
    if(a%5 == 0){
        printf("É divisível por 5\n");
    };
    if(a%2 == 0){
        printf("É divisível por 2\n");
    };
    if(a%10 != 0 && a%5 != 0 && a%2 != 0){
        printf("Não é divisível por nenhum dos dois");
    };
}