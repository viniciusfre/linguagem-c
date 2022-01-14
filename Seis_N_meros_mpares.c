#include <stdio.h>
int main() {
int d,c;
scanf("%d",&d);
for(c = d; c <= d+11; c++){
    if(c%2 != 0){
        printf("%d\n",c);

    }
}



return 0;
}