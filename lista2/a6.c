#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    int i;
    scanf("%d", &i);
    if(i >= 18 && i <= 65){
        printf("Eleitor obrigatório");
    }else if(i >= 16 && i < 18 || i > 65){
        printf("Eleitor facultativo");
    }else{
        printf("Não eleitor");
    };
}