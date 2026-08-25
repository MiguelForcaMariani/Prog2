#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void main(){
    SetConsoleOutputCP(65001);
    float a, b, c, d, r1, r2;
    printf("Digite o valor de a:");
    scanf("%f", &a);
    printf("Digite o valor de b:");
    scanf("%f", &b);
    printf("Digite o valor de c:");
    scanf("%f", &c);
    d = pow(b,2)-4*a*c;
    r1 = (-b+sqrt(d))/(2*a);
    r2 = (-b-sqrt(d))/(2*a);
    if(d<0){
        printf("Não possue raizes\n");
    }else{
        printf("As raizes são %.2f e %.2f\n", r1, r2);
    }
    if(a>0){
        printf("Concavidade voltada para cima\n");
    }else if(a<0){
        printf("concavidade voltada para baixo\n");
    }else{
        printf("Não é uma função de 2° grau\n");
    }
}