#include <stdio.h>
int main() {
float V1,V2,V3,V4,V5,V6;
int c;
scanf("%f",&V1);
scanf("%f",&V2);
scanf("%f",&V3);
scanf("%f",&V4);
scanf("%f",&V5);
scanf("%f",&V6);
if(V1 > 0){
c++;
}
if(V2 > 0){
c++;
}
if(V3 > 0){
c++;
}
if(V4 > 0){
c++;
}
if(V5 > 0){
c++;
}
if(V6 > 0){
c++;
}
printf("%d valores positivos\n",c);
return 0;
}