#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>

int lancarDado(){
    return ( rand() % 6) + 1;
}

int jogarDados(){
    int d1, d2, soma;
    printf("\n\nVamos jogar os dados\n");
    system("PAUSE");
    d1 = lancarDado();
    d2 = lancarDado();
    soma = d1 + d2;
    printf("Dado 1: %d\nDado 2: %d\n\n", d1, d2);
    printf("SOMA: %d\n", soma);
    printf("---------------------\n\n");
    return soma;
}

void main(){
    SetConsoleOutputCP(65001);
    srand( (unsigned)time(NULL) );
    int p, s, v = 0;
    float d = 100, a;
    char o;
    do {
        do {
            printf("\nj - Jogar\ns - Sair\n");
            printf("\nDigite a opção selecionada: ");
            scanf(" %c", &o);
            if(!isalpha(o) || (o != 'j' && o != 's')){
                printf("\nOpção inválida.\n");
            }
        }while(!isalpha(o) || (o != 'j' && o != 's'));
        switch (o) {
            case 'j':
                do{
                printf("\nDigite a quantia que quer apostar: ");
                scanf("%f", &a);
                if(isnan(a) || a > d || a < 0){
                    printf("\nValor inválido.");
                }
                d -= a;
                }while(isnan(a) || a > d || a < 0);

                s = jogarDados();
                if(s == 7 || s == 11){
                    v = 1;
                    a = a*2;
                    d += a;
                    printf("\nVocê venceu e tem R$%.2f", d);
                }else if(s == 2 || s == 3 || s == 12){
                    v = 1;
                    printf("\nVocê perdeu e tem R$%.2f.", d);
                }else{
                    p = s;
                    printf("Você precisa tirar %d novamente para vencer\nCaso tire um 7 antes disso, perderá.\n", p);
                    do {
                        v = 0;
                        s = jogarDados();
                        if(s == 7){
                            v = 1;
                            printf("\nVocê perdeu e tem R$%.2f.", d);
                        }else if(s == p){
                            v = 1;
                            a = a*2;
                            d += a;
                            printf("\nVocê venceu e tem R$%.2f", d);
                        }else{
                            printf("\nContinue jogando.");
                        }
                    } while (v != 1);
                }
                break;
            case 's':
                break;
        }
    }while(o != 's');
}