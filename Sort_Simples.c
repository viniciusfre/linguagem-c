#include <stdio.h>
#include <stdlib.h>
int main()
{ int a,b,c;
scanf("%d%d%d",&a,&b,&c);
//a b c
if(a < b && a < c && b < c){
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);


}
//a c b
if(a < c && a < b && c < b){
    printf("%d\n",a);
    printf("%d\n",c);
    printf("%d\n",b);
}
//b a c
if(b < a && b< c && a<c){
    printf("%d\n",b);
    printf("%d\n",a);
    printf("%d\n",c);

}
// b c a
if(b < c && b < a && c<a){
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",a);

}
// c a b
if(c < a && c < b && a < b){
    printf("%d\n",c);
    printf("%d\n",a);
    printf("%d\n",b);

}
// c b a
if(c < b && c < a && b < a){
    printf("%d\n",c);
    printf("%d\n",b);
    printf("%d\n",a);
}
printf("\n");





printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);

    

    
    return 0;
}
