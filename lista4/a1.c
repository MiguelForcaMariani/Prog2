#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int matricula(){
    int mattemp = 0;
    printf("Digite a matricula do aluno: ");
    do{
        scanf("%d", &mattemp);
        if(mattemp <= 0){
            printf("\nMatrícula inválida, digite novamente.");
        }
    }while (mattemp <= 0);
    return(mattemp);
}

float nota(){
    float nota = 0;
    do{
        printf("\nDigite a nota do aluno: ");
        scanf("%f", &nota);
        if(nota <= 0 || nota > 10){
            printf("\nNota inválida, digite novamente.");
        }
    }while (nota <= 0 || nota > 10);
    return(nota);
}

float media(){
    int media = 0;
    for(int i = 0; i < 3; i++){
        media += nota();
    }
    media = media/3;
    return(media);
}

void resultado(char str[], float media){
    if(media >= 7){
        strcpy(str, "Aprovado.");
    }else if(media < 7 && media >= 6){
        strcpy(str, "Prova final.");
    }else{
        strcpy(str, "Reprovado");
    }
}

void main(){
    SetConsoleOutputCP(65001);
    int mat = matricula();
    float med = media();
    char res[12];
    resultado(res, med);
    printf("%s", res);
}

