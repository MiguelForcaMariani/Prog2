#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    int m, n, qh=0, qm=0, qdr=0, qdi=0, qdb=0, qa=0, qdbh=0, qdrh=0, qdih=0, qdbm=0, qdrm=0, qdim=0;
    float med=0, pdb, pdr, pdi, pdbh, pdrh, pdih, pdbm, pdrm, pdim;
    char s;
    do{
        printf("Digite a matrícula:");
        scanf("%d", &m);
        if(m>0){
            printf("\nDigite a nota do aluno:");
            scanf("%d", &n);
            printf("\nDigite o sexo do(a) aluno(a):");
            scanf(" %c", &s);
            qa++;
            med+=n;
            switch(s){
            case 'h':
                qh++;
                if(n>=80){
                    qdb++;
                    qdbh++;
                }else if(n<80 && n>=60){
                    qdr++;
                    qdrh++;
                }else{
                    qdi++;
                    qdih++;
                }
            break;
            case 'm':
                qm++;
                if(n>=80){
                    qdb++;
                    qdbm++;
                }else if(n<80 && n>=60){
                    qdr++;
                    qdrm++;
                }else{
                    qdi++;
                    qdim++;
                }
            break;
            }
        }
    }while(m>0);
    med=med/qa;
    pdb=(qdb/qa)*100;
    pdr=(qdr/qa)*100;
    pdi=(qdi/qa)*100;
    pdbh=(qdbh/qh)*100;
    pdrh=(qdrh/qh)*100;
    pdih=(qdih/qh)*100;
    pdbm=(qdbm/qm)*100;
    pdrm=(qdrm/qm)*100;
    pdim=(qdim/qm)*100;
    printf("\n\nExistem %d homens nessa turma.\n", qh);
    printf("Existem %d mulheres nessa turma.\n", qm);
    printf("A média das notas é %.2f\n", med);
    printf("A quantidade de alunos com bom desenvolvimento é %d\n", qdb);
    printf("A quantidade de alunos com desenvolvimento regular é %d\n", qdr);
    printf("A quantidade de alunos com desenvolvimento insuficiente é %d\n", qdi);
    printf("Porcentagem de alunos com cada rendimento: %.2f%% DB, %.2f%% DR, %.2f%% DI\n", pdb, pdr, pdi);
    printf("Porcentagem de homens com cada rendimento: %.2f%% DB, %.2f%% DR, %.2f%% DI\n", pdbh, pdrh, pdih);
    printf("Porcentagem de mulheres com cada rendimento: %.2f%% DB, %.2f%% DR, %.2f%% DI\n", pdbm, pdrm, pdim);
}