#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 1000

int pesquisar(int X[], int q, int n){
    for(int i = 0; i < q; i++){
        if(X[i] == n){
            return i;
        }
    }
    return -1;
}

void inserir(int X[], int *q, int n, int p){
    if(p < 0 || p >= MAX){
        printf("\nLimite do vetor excedido!");
    }else{
        X[p] = n;
        (*q)++;
    }
}

void remover(int X[], int *q, int p){
    if(p >= 0){
    for(int i = p; i < *q - 1; i++){
        X[i] = X[i+1];
    }
    (*q)--;
    }
}

void input(int X[], int *q, char c){
    int n;
    *q = 0;
    printf("\nDigite os numeros para o conjunto %c, digite qualquer outra coisa para encerrar.\n", c);
    while(*q < MAX){
        printf("\nDigite o %dº elemento: ", *q + 1);
        if(scanf("%d", &n) != 1){
            while(getchar() != '\n');
            break;
        }
        if(pesquisar(X, *q, n) != -1){
            printf("Elemento repetido, ignorado.");
        }else{
            inserir(X, q, n, *q);
        }
    }
}

void listar(int X[], int q, char c){
    printf("\nElementos do conjunto %c: ", c);
    if(q == 0){
        printf("(vazio)");
        return;
    }
    for(int i = 0; i < q; i++){
        if(i == q - 1){
            printf("%d.", X[i]);
        }else{
            printf("%d, ", X[i]);
        }
    }
}

void diff(int X[], int Y[], int C[], int qX, int qY, int *qC){
    *qC = 0;
    for(int i = 0; i < qX; i++){
        inserir(C, qC, X[i], i);
    }
    for(int i = 0; i < qY; i++){
        remover(C, qC, pesquisar(C, *qC, Y[i]));
    }
}

void uni(int X[], int Y[], int C[], int qX, int qY, int *qC){
    diff(X, Y, C, qX, qY, qC);
    for(int i = 0; i < qY; i++){
        inserir(C, qC, Y[i], *qC);
    }
}

void diffSim(int X[], int Y[], int C[], int qX, int qY, int *qC){
    int Z[MAX], W[MAX], qZ = 0, qW = 0;
    diff(X, Y, Z, qX, qY, &qZ);
    diff(Y, X, W, qY, qX, &qW);
    uni(Z, W, C, qZ, qW, qC);
}

void inter(int X[], int Y[], int C[], int qX, int qY, int *qC){
    int Z[MAX], W[MAX], qZ  = 0, qW = 0;
    diffSim(X, Y, Z, qX, qY, &qZ);
    uni(X, Y, W, qX, qY, &qW);
    diff(W, Z, C, qW, qZ, qC);
}

void menu(int *op) {
    do{
        printf("\n\n----- MENU DE OPERAÇÕES -----");
        printf("\n\n1 - Inserir Conjuntos A e B");
        printf("\n2 - União (A U B)");
        printf("\n3 - Interseção (A ∩ B)");
        printf("\n4 - Diferença (A - B)");
        printf("\n5 - Diferença (B - A)");
        printf("\n6 - Diferença Simétrica (A ∆ B)");
        printf("\n\n0 - Sair");
        printf("\n\nInsira a opção equivalente a operação que deseja realizar: ");
        if(scanf("%d", op) <= 0 || *op < 0 || *op > 6){
            while(getchar() != '\n');
            *op = -1;
            printf("\nOpção inválida.");
        }
    }while(*op == -1);
}

int main(void) {
SetConsoleOutputCP(65001);
    int A[MAX], B[MAX], C[MAX], qA = 0, qB = 0, qC = 0, op;
    char a = 'A', b = 'B', c = 'C';
    do{
        menu(&op);
        switch(op){
            case 0:
                break;
            case 1:
                input(A, &qA, a);
                input(B, &qB, b);
                printf("\n\nOs vetores inseridos foram:\n");
                listar(A, qA, a);
                listar(B, qB, b);
                printf("\n");
                system("PAUSE");
                break;
            case 2:
                uni(A, B, C, qA, qB, &qC);
                printf("\n\nUnião de A e B: ");
                listar(C, qC, c);
                printf("\n");
                system("PAUSE");
                break;
            case 3:
                inter(A, B, C, qA, qB, &qC);
                printf("\n\nInterseção de A e B: ");
                listar(C, qC, c);
                printf("\n");
                system("PAUSE");
                break;
            case 4:
                diff(A, B, C, qA, qB, &qC);
                printf("\n\nDiferença de A - B: ");
                listar(C, qC, c);
                printf("\n");
                system("PAUSE");
                break;
            case 5:
                diff(B, A, C, qB, qA, &qC);
                printf("\n\nDiferença de B - A: ");
                listar(C, qC, c);
                printf("\n");
                system("PAUSE");
                break;
            case 6:
                diffSim(A, B, C, qA, qB, &qC);
                printf("\n\nDiferença Simétrica de A ∆ B: ");
                listar(C, qC, c);
                printf("\n");
                system("PAUSE");
                break;
        }
    }while(op != 0);
}