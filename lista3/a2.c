#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    int i;
    for(i=5; i<500; i+=5){
        printf("%d\n", i);
    }
}