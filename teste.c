#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX 100

int menu() {
    int op;

    printf("\n\n----- MENU DE OPERAÇÕES -----");
    printf("\n\n0 - Sair");
    printf("\n\n1 - União (A U B)");
    printf("\n2 - Interseção (A ∩ B)");
    printf("\n3 - Diferença (A - B)");
    printf("\n4 - Diferença (B - A)");
    printf("\n5 - Diferença Simétrica (A ∆ B)");

    printf("\n\nInsira a opção equivalente a operação que deseja realizar: ");
    scanf("%d", &op);
    return op;
}

// função dos vetor

void listar(int *vetor, int quant) {
    int i;
    for (i = 0; i < quant; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}


int pesquisar(int *vetor, int quant, int valor) {
    int i;
    for (i = 0; i < quant; i++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1;
}


int inserir(int *vetor, int *quant, int valor) {
    if (*quant < MAX && pesquisar(vetor, *quant, valor) == -1) {
        vetor[*quant] = valor;
        (*quant)++;
        return 1;
    }
    return 0;
}


void remover(int *vetor, int *quant, int valor) {
    int i, pos = pesquisar(vetor, *quant, valor);

    if (pos != -1) {
        for (i = pos; i < *quant - 1; i++) {
            vetor[i] = vetor[i + 1];
        }
        (*quant)--;
    }
}


void lerConjunto(int *vetor, int *quant, char nome) {
    int n, i, valor;

    *quant = 0;

    printf("\nQuantos elementos tem o conjunto %c? ", nome);
    scanf("%d", &n);

    if (n > MAX) {
        n = MAX;
    }

    for (i = 0; i < n; i++) {
        printf("Elemento %d de %c: ", i + 1, nome);
        scanf("%d", &valor);

        if (inserir(vetor, quant, valor) == 0) {
            printf("  %d já existe no conjunto, digite outro.\n", valor);
            i--;
        }
    }
}

//função dos conj

void uniao(int *A, int qA, int *B, int qB, int *res, int *qRes) {
    int i;
    *qRes = 0;

    for (i = 0; i < qA; i++) {
        inserir(res, qRes, A[i]);
    }
    for (i = 0; i < qB; i++) {
        inserir(res, qRes, B[i]);
    }
}

void intersecao(int *A, int qA, int *B, int qB, int *res, int *qRes) {
    int i;
    *qRes = 0;

    for (i = 0; i < qA; i++) {
        if (pesquisar(B, qB, A[i]) != -1) {
            inserir(res, qRes, A[i]);
        }
    }
}


void diferenca(int *A, int qA, int *B, int qB, int *res, int *qRes) {
    int i;
    *qRes = 0;

    for (i = 0; i < qA; i++) {
        inserir(res, qRes, A[i]);
    }
    for (i = 0; i < qB; i++) {
        remover(res, qRes, B[i]);
    }
}

void diferencaSimetrica(int *A, int qA, int *B, int qB, int *res, int *qRes) {
    int i;

    diferenca(A, qA, B, qB, res, qRes);

    for (i = 0; i < qB; i++) {
        if (pesquisar(A, qA, B[i]) == -1) {
            inserir(res, qRes, B[i]);
        }
    }
}

//principal

int main() {

    SetConsoleOutputCP(65001);

    int conjA[MAX], conjB[MAX], conjRes[MAX];
    int qntdA = 0, qntdB = 0, qntdRes = 0, opcao;

    lerConjunto(conjA, &qntdA, 'A');
    lerConjunto(conjB, &qntdB, 'B');

    printf("\nConjunto A: ");
    listar(conjA, qntdA);
    printf("Conjunto B: ");
    listar(conjB, qntdB);

    do {

        opcao = menu();

        switch (opcao) {
            case 0:
                break;
            case 1:
                printf("\n\nUnião de A e B: ");
                uniao(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                listar(conjRes, qntdRes);
                break;
            case 2:
                printf("\n\nInterseção de A e B: ");
                intersecao(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                listar(conjRes, qntdRes);
                break;
            case 3:
                printf("\n\nDiferença de A - B: ");
                diferenca(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                listar(conjRes, qntdRes);
                break;
            case 4:
                printf("\n\nDiferença de B - A: ");
                diferenca(conjB, qntdB, conjA, qntdA, conjRes, &qntdRes);
                listar(conjRes, qntdRes);
                break;
            case 5:
                printf("\n\nDiferença Simétrica de A ∆ B: ");
                diferencaSimetrica(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                listar(conjRes, qntdRes);
                break;
            default:
                printf("\n\nOpção inválida! Tente novamente.");
        }

    } while (opcao != 0);

    return 0;
}