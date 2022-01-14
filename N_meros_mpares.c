#include <stdio.h>
int main() {
int d,c;
scanf("%d",&d);
for(c = 1; c <= d; c++){
    if(c%2 != 0){
        printf("%d\n",c);

    }
}



return 0;
}