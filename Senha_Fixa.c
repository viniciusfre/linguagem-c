#include <stdio.h>
int main() {
int senha=0;
while(scanf("%d",&senha)!=EOF){
    if(senha == 2002){
        printf("Acesso Permitido\n");
        break;
    }else{
        printf("Senha Invalida\n");
    }
}

return 0;
}