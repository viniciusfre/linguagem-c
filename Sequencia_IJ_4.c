#include <stdio.h>
int main()
{
    double I = 0, J = 1;
    int contador = 0, aux = 0, aux1 = 0;
    for (I = 0; I <= 2; I = I + 0.2)
    {
        for (J = 1; J <= 3; J = J + 1)
        {
            //if (contador >= 3)
              if(I >= 0.9 && I < 1.2){
                    printf("I=%.0lf J=%.0lf\n", I, J + I);

                }
                else if(I >= 1.9 && I <= 2.2){
                    printf("I=%.0lf J=%.0lf\n", I, J + I);
                }
                else if(I == 0){
                    printf("I=%.0lf J=%.0lf\n", I, J + I);


                }
                else 
                {
                    printf("I=%.1lf J=%.1lf\n", I, J + I);
                }
                
            
            //else if (contador < 3)
           // {
           //     printf("I=%.0lf J=%.0lf\n", I, J + I);
           // }
        }
        contador = contador + 3;
    }
    return 0;
}