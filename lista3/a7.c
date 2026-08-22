#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    float p, a, medp=0, meda=0, ma=0, mb=999, mg=0, mm=999; 
    int c, cma, cmb, cmg, cmm, cont=0;
    do{
        printf("\nDigite o cógio do cliente:");
        scanf("%d", &c);
        if (!(c<=0)) {
            cont++;
            printf("\nDigite o peso do cliente(em Kg):");
            scanf("%f", &p);
            medp+=p;
            printf("\nDigite a altura do cliente(em M):");
            scanf("%f", &a);
            meda+=a;
            if(ma<a){
                ma=a;
                cma=c;
            }
            if(mb>a){
                mb=a;
                cmb=c;
            }
            if(mg<p){
                mg=p;
                cmg=c;
            }
            if(mm>p){
                mm=p;
                cmm=c;
            }
        }
    } while(!(c<=0));
    medp=medp/cont;
    meda=meda/cont;
    printf("O cliente de código %d é o mais alto com %.2f metros.\n", cma, ma);
    printf("O cliente de código %d é o mais baixo com %.2f metros.\n", cmb, mb);
    printf("O cliente de código %d é o mais gordo com %.2f quilos.\n", cmg, mg);
    printf("O cliente de código %d é o mais magro com %.2f quilos.\n", cmm, mm);
    printf("A média de peso é %.2f enquando a média de altura é %.2f", medp, meda);
}