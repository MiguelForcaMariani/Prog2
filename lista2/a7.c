#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    float a, b, c, m;
    printf("Digite a nota do 1° semestre:");
    scanf("%f", &a);
    printf("Digite a nota do 2° semestre:");
    scanf("%f", &b);
    printf("Digite a nota do 3° semestre:");
    scanf("%f", &c);
    m = (a+b+c)/3;
    if(m >= 7){
        printf("Aprovado");
    }else if( m < 3){
        printf("Reprovado");
    }else{
        printf("Prova final");
    }
}