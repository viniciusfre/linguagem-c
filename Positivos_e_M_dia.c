#include <stdio.h>
int main() {
float valores,media;
int contador,positivos=0;
for(contador = 0;contador <6;contador++){
    scanf("%f",&valores);
    if(valores > 0){
        positivos++;
        media = media + valores;
        
    }

}
printf("%d valores positivos\n",positivos);
printf("%.1f\n",media/positivos);

return 0;
}