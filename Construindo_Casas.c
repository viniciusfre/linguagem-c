#include <stdio.h>
#include <math.h>
int main() {
//casa 8 por 10 metros
//100% do terreno
//todos terrenos sao perfeitamente quadrados
//80 metros quadrados
//8994 metros o terreno
int A,B,C,lado;
while(scanf("%d %d %d",&A,&B,&C)!= EOF){
    lado=sqrt((A * B * 100)/C) ;
    if(lado == 0){
        break;
    }
    printf("%d\n",lado);

}
    
    



return 0;
}