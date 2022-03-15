#include <stdio.h>
#include <string.h>
int main() {
char numero[100];
int i=0,tamanho;
scanf("%s",numero);
tamanho = strlen(numero);
for(i = tamanho-1;i >= 0;i--){
    if(i == 0){
        printf("%c\n",numero[i]);
    }
    else{
        printf("%c",numero[i]);
    }
}
return 0;
}