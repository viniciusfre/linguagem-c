#include <stdio.h>
int main() {
float I,J,contagem,quant;
I = 0;
J = 1;
quant = 0;
for(contagem = I;contagem < 2;contagem+=0.2){
    printf("I=%.1f J=%.0f\n",I,J);
    J++;
    J = J+I;
    quant++;
    if(quant == 2 && J==3){
        printf("I=%.1f J=%.0f\n",I,J);
        J = J-2;
        I = I+0.2;
        quant = 0;
    }
}
    
    
    


return 0;
}