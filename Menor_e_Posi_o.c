#include <stdio.h>
int main() {
int N=0,contador=0,menor=0,guardacontador=0;//tamanho do vetor X
int X[999];//vetor X
scanf("%d",&N);
//10
for(contador = 0;contador < N;contador++){
    scanf("%d",&X[contador]);
    if(contador == 0){
        menor=X[0];
    }
    if(X[contador] < menor){
        menor = X[contador];
        guardacontador = contador;

    }

}
printf("Menor valor: %d\n",menor);
printf("Posicao: %d\n",guardacontador);
return 0;
}