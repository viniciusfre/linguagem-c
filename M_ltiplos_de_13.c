#include <stdio.h>
int main() {
int X,Y,contador,aux,soma=0;
scanf("%d",&X);
scanf("%d",&Y);
if(X > Y){
    aux = X;
    X = Y;
    Y = aux;

}
//Y é o maior
for(contador = X;contador <= Y;contador++){
    if(contador %13 != 0){
        soma += contador;
    }



}
printf("%d\n",soma);

return 0;
}