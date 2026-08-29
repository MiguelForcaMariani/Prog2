#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(void){
    SetConsoleOutputCP(65001);
    float x;
    if(x<=1){
        printf("1");
    }else if(x>1 && x<=2){
        printf("2");
    }else if(x>2 && x<=3){
        printf("%.2f", pow(x, 2));
    }else{
        printf("%.2f", pow(x, 3));
    }
}