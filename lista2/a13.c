#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    int c, q, p, vt, vd;
    float d;
    printf("Digite o código do produto:");
    scanf("%d", &c);
    printf("Digite a quantidade comprada:");
    scanf("%d", &q);
    if(c>=1 || c<=10){
        p=10;
    }else if(c>=11 || c<=20){
        p=15;
    }else if(c>=21 || c<=30){
        p=20;
    }else{
        p=30;
    }
    vt = p*q;
    if(vt<=250){
        d = 0.95;
    }else if(vt > 250 && vt<=500){
        d = 0.9;
    }else{
        d = 0.85;
    }
    vd = vt*d;
    printf("Preço unitário é: %d\nValor total é: %d\nPorcentagem do desconto: %.2f\nValor total final: %d", p, vt, (100-(d*100)), vd);
}