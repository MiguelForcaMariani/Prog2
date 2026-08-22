#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    int n1, n2, n3, n4, n5, ma, me, n;
    printf("Digite a nota N°1:");
    scanf("%d", &n1);
    printf("Digite a nota N°2:");
    scanf("%d", &n2);
    printf("Digite a nota N°3:");
    scanf("%d", &n3);
    printf("Digite a nota N°4:");
    scanf("%d", &n4);
    printf("Digite a nota N°5:");
    scanf("%d", &n5);
    ma = n1;
    me = n1;
    if (n2 > ma){
        ma = n2;
    }
    if(n3 > ma){
        ma = n3;
    }
    if(n4 > ma){
        ma = n4;
    }
    if(n5 > ma){
        ma = n5;
    }
    if (n2 < me){
        me = n2;
    }
    if(n3 < me){
        me = n3;
    }
    if(n4 < me){
        me = n4;
    }
    if(n5 < me){
        me = n5;
    }
    n = (n1+n2+n3+n4+n5-ma-me)/3;
    printf("A média é %d e a maior e menor nota são, respectivamente %d e %d", n, ma, me);
}