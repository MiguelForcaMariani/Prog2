#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

char *input(){
    char *msg = NULL;
    size_t tam = 0;
    int caractere;
    while((caractere = getchar()) != '\n' && caractere != EOF){
        msg = realloc(msg, tam+2);
        msg[tam] = caractere;
        tam++;
        msg[tam] = '\0';
    }
    return msg;
}

void trocar(char *msg, char a, char b){
    for (char *p = msg; *p != '\0'; p++){
        if (*p == a){
            *p = b;
        }else if(*p == b){
            *p = a;
        }
    }

}

void substituir(char *msg){
    trocar(msg, 'a', '@');
    trocar(msg, 'e', '&');
    trocar(msg, 'i', '$');
    trocar(msg, 'o', '*');
    trocar(msg, 'u', '#');
}

void inverte(char *str){
    size_t tam = strlen(str);
    char temp[tam+1];
    for(int i = 0; i < tam; i++){
        temp[i] = str[tam - 1 - i];
    }
    temp[tam] = '\0';
    strcpy(str, temp);
}

void reagrupar(char *msg){  
    size_t tam1 = (strlen(msg) + 1) / 2;
    size_t tam2 = strlen(msg) / 2;
    char *str1 = malloc(tam1 + 1);
    char *str2 = malloc(tam2 + 1);
    for (size_t i = 0; i < tam1; i++){
    str1[i] = msg[i * 2];
    }
    str1[tam1] = '\0';
    for (size_t i = 0; i < tam2; i++){
    str2[i] = msg[i * 2 + 1];
    }
    str2[tam2] = '\0';
    inverte(str2);
    size_t i = 0, j = 0, k = 0;
    while (i < tam1 && j < tam2) {
        msg[k++] = str1[i++];
        msg[k++] = str2[j++];
    }
    while (i < tam1) msg[k++] = str1[i++];
    if (i < tam1){msg[k++] = str1[i];}
    msg[k] = '\0';
    free(str1);
    free(str2);
}

int main(){
SetConsoleOutputCP(65001);
    char *msg;
    printf("Digite a sua mensagem: ");
    msg = input();
    if(msg == NULL){
        printf("\nNenhuma mensagem digitada.\n");
        return 0;
    }
    substituir(msg);
    reagrupar(msg);
    printf("\nSua mensagem criptografada é: %s", msg);
    free(msg);
}