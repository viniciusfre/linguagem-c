#include <stdio.h>
int main(){
    double N1,N2,N3,N4,media,exame,mediafinal;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    printf("Media: %.1lf\n",media);
    if(media >= 7){
        printf("Aluno aprovado.\n");

    }
    if(media < 5){
        printf("Aluno reprovado.\n");
    }
    if(media >= 5 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);
        printf("Nota do exame: %.1lf\n",exame);
        mediafinal = (exame + media) / 2;
        if(mediafinal >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",mediafinal);


        }
        if(mediafinal <= 4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",mediafinal);

        }

    }
    return 0;
}


   