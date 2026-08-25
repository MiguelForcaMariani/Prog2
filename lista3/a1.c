#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    for(int i=100; i>=1; i--){
        printf("%d\n", i);
    }
}