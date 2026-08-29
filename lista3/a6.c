#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    int n, i=1, v=0;
    printf("Digite o valor de N:");
    scanf("%d", &n);
    for(n; n>0; n--){
        v+=i;
        printf("\n%d", v);
        i+=2;
    }
}