#include <stdio.h>
int main() {
int entrada,contador;
scanf("%d",&entrada);
for(contador = 1;contador <= 10;contador++){
    printf("%d x %d = %d\n",contador,entrada,contador * entrada);

}
return 0;
}