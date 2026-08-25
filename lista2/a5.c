#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    int i;
    scanf("%d", &i);
    if(i >= 65){
        printf("Pessoa idosa");
    }else if(i >= 18){
        printf("Maior de idade");
    }else{
        printf("Menor de idade");
    };
}