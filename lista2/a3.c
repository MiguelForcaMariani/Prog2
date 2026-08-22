#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    float a, b, c, x, y, z;
    printf("Digite o 1° número:");
    scanf("%f", &a);
    printf("Digite o 2° número:");
    scanf("%f", &b);
    printf("Digite o 3° número:");
    scanf("%f", &c);
    if(a > b){
        x = a;
        y = b; 
    }else{
        x = b;
        y = a;
    };
    if(c > x){
        z = y;
        y = x;
        x = c;
    }else if(c > y){
        z = y;
        y = c;
    }else{
        z = c;
    };
    printf("%.2f, %.2f, %.2f", x, y, z);
}