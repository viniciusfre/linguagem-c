#include <stdio.h>
int main() {
int valores,contador,maior=0,posicao=0;
for(contador = 0;contador < 100;contador++){
    scanf("%d",&valores);
    if(valores > maior ){
        maior = valores;
        posicao=contador+1;
        
        
    }

}
printf("%d\n",maior);
printf("%d\n",posicao);
return 0;
}
//2 113 45 34565 6
