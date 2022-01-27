#include <stdio.h>
int main() {
int N=0;//casos de teste
int X=0;//valor inteiro
int contador=0,i=0;//contador
int soma=0;//soma dos divisores do numero
scanf("%d",&N);
//3
for(contador = 0;contador < N;contador++){
    scanf("%d",&X);
    //6
    for(i = 1;i < X;i++){
        if(X % i == 0){
            soma = soma + i;
            

        }

    }
    if(soma == X){
        printf("%d eh perfeito\n",X);
    }
    else{
        printf("%d nao eh perfeito\n",X);
    }
    soma = 0;
    
}
return 0;
}