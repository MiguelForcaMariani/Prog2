#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    int i;
    for(i=100; i>=1; i--){
        printf("%d\n", i);
    }
}