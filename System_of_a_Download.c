#include <stdio.h>
int main(){
int C,X,Y,D;
scanf("%d",&C);
for(D = 0 ;D < C ; D++){
    scanf("%d%d",&X,&Y);
    if(X + Y == 0){
        printf("PROXYCITY\n");   
    }
    if(X + Y == 1){
        printf("P.Y.N.G.\n");
    }
    if(X + Y == 2){
        printf("DNSUEY!\n");
    }
    if(X + Y == 3){
        printf("SERVERS\n");
    }
    if(X + Y == 4){
        printf("HOST!\n");
    }
    if(X + Y == 5){
        printf("CRIPTONIZE\n");
    }
    if(X + Y == 6){
        printf("OFFLINE DAY\n");
    }
    if(X + Y == 7){
        printf("SALT\n");
    }
    if(X + Y == 8){
        printf("ANSWER!\n");
    }
    if(X + Y == 9){
        printf("RAR?\n");
    }
    if(X + Y == 10){
        printf("WIFI ANTENNAS\n");
    }

}
    


return 0;
}