#include <stdio.h>
int main() {
int idades=1,contador=0;
double media=0;
while(idades != 0){
    scanf("%d",&idades);
    if(idades < 0){
        break;

    }
    else{
        media=media+idades;
        contador++;

    }
    


}
printf("%.2lf\n",media/contador);

return 0;
}