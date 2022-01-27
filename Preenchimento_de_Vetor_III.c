#include <stdio.h>
int main() {
double X=0,N[100];
int contador=0;
scanf("%lf",&X);
for(contador = 0;contador < 100;contador++){
    N[contador]=X;
    printf("N[%d] = %.4lf\n",contador,N[contador]);
    X = X/2;

}
return 0;
}