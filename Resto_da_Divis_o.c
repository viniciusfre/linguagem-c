#include <stdio.h>
int main() {
int X = 0,Y= 0,aux = 0 ,k = 0;
scanf("%d",&X);
scanf("%d",&Y);
//X = 18 Y = 10/ aux = X/ aux = 18/ X = Y/ X = 10/ Y = aux / Y = 18
if(X > Y){
    aux = X;
    X = Y;
    Y = aux;
}
for(k = X + 1;k < Y;k++){
    if(k%5 == 2 || k%5 == 3){
        printf("%d\n",k);

    }
}

return 0;
}