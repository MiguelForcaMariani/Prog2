#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

float preco(){
    float p;
    do{
    printf("\nDigite o preço do produto: ");
    scanf("%f", &p);
    if(p<=0 || isnan(p)){
        printf("\nO preço digitado é inválido.");
    }
    }while(p<=0 || isnan(p));
    return(p);
}

char metodo(){
    char m;
    do{
    printf("\nDigite v para pagamento a vista e p para pagamento parcelado: ");
    scanf(" %c", &m);
    if(!isalpha(m) || (m != 'v' && m != 'p')){
        printf("\nO metodo digitado é inválido.");
    }
    }while(!isalpha(m) || (m != 'v' && m != 'p'));
    return(m);
}

int quantidade(){
    int q;
    do{
    printf("\nDigite a quantidade comprada: ");
    scanf("%d", &q);
    if(q<=0 || isnan(q)){
        printf("\nA quantidade digitada é inválida.");
    }
    }while(q<=0 || isnan(q));
    return(q);    
}

float total(float p, int q, char m){
    float t = p*q;
    switch (m) {
        case 'v':
            t = t*0.9;
            break;
        case 'p':
            t = t*1.1; 
            break;
    }
    return(t);
}

void main(){
    SetConsoleOutputCP(65001);
    float p = preco();
    int q = quantidade();
    char m = metodo();
    printf("\nO total da compra de %d produtos foi %.2f", q, total(p, q, m));
}