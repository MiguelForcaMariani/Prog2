#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void showsDisponiveis(int maxShow[], int vendas[], int disponiveis[], int *id){
    *id = 0;
    printf("\nShows disponíveis: ");
    for(int i = 0; i < 10; i++){
        if(maxShow[i] > vendas[i]){
            printf("%d, ", i);
            disponiveis[*id] = i;
            (*id)++;
        }
    }
}

void realizarVenda(int maxShow[], int vendas[], int disponiveis[], int *id){
    int o, a = 0, v;
    printf("\nSelecione para qual dos shows disponíveis a venda será realizada: ");
    if(scanf("%d", &o)<=0){
        while(getchar() != '\n')
        o = -1; 
    }
    for(int i=0; i<10; i++){
        if(o == disponiveis[i]){
            a = 1;
        }
    }
    if(a != 1 || o == -1){
        printf("\nOpção inválida");
    }else{
        printf("\nDigite a quantidade de ingressos a ser vendida: ");
        if(scanf("%d", &v) <= 0){
        while(getchar() != '\n')
        v = -1;
        }
        if(v <= 0){
            printf("\nQuantidade inválida.");
        }else if((vendas[o] + v) > maxShow[o]){
            printf("\nQuantidade excede o limite de ingressos.");
        }else{
            vendas[o] += v;
        }
    }
}

void imprimir(int vendas[]){
    printf("\nShows que tiveram vendas: ");
    for(int i = 0; i < 10; i++){
        if(vendas[i] != 0){
            printf("%d, ", i);
        }
    }
}

int main(void) {
SetConsoleOutputCP(65001);
int maxShow[10] = {100,110,120,120,130,130,140,140,150,150};
int vendas[10] = {0,0,0,0,0,0,0,0,0,0};
int disponiveis[10], id = 0;
int op;;
do {
printf("\n\t1 - Vender ingresso");
printf("\n\t2 - Listar vendidos");
printf("\n\t0 - Sair");
printf("\n\tSua opção: ");
scanf("%d", &op);
switch (op){
case 0 : break;
case 1 : showsDisponiveis(maxShow, vendas, disponiveis, &id);
realizarVenda(maxShow, vendas, disponiveis, &id);
break;
case 2 : imprimir(vendas);
break;
default: printf("\n\n\tOpção inválida!\n");
}
} while ( op != 0 );
}