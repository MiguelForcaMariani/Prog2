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

int main(){
    SetConsoleOutputCP(65001);
    srand( (unsigned)time(NULL) );
    int p, s, v = 0;
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
                s = jogarDados();
                if(s == 7 || s == 11){
                    printf("\nVocê ganhou o jogo");
                }else if(s == 2 || s == 3 || s == 12){
                    printf("\nVocê perdeu o jogo");
                }else{
                    p = s;
                    printf("Você precisa tirar %d novamente para vencer\nCaso tire um 7 antes disso, perderá.\n", p);
                    do {
                        v = 0;
                        s = jogarDados();
                        if(s == 7){
                            printf("\nVocê perdeu.");
                            v = 1;
                        }else if(s == p){
                            printf("\nVocê venceu.");
                            v = 1;
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