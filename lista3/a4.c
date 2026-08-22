#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    int i, s, sm=0;
    do{
        printf("Digite o limite inferior:");
        scanf("%d", &i);
        printf("\nDigite o limite superior:");
        scanf("%d", &s);
        if(i>=s){
            printf("\nO limite inferior deve ser menor que o limite superior. Insira novamente");
        }
    }while(i>=s);
    if((i%2)!=0){
        i++;
    }else{
    i+=2;
    }
    for(i; i<s; i+=2){
        sm+=i;
    }
    printf("O somatório dos números pares contidos no intervalo é: %d\n", sm);
}