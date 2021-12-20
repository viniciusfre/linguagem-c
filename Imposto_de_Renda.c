#include <stdio.h>
int main()
{
    double salario;
    scanf("%lf", &salario);
    if (salario >= 0 && salario <= 2000)
    {
        printf("Isento\n");
    }
    if(salario >= 2000.01 && salario <= 3000){
        printf("R$ %.2lf\n",(salario - 2000) * 0.08);


    }
    if(salario >= 3000.01 && salario <= 4500){
        printf("R$ %.2lf\n",((salario - 3000) * 0.18) + (salario - (salario - 3000)-2000) * 0.08);
        
    }
    if(salario > 4500){
       printf("R$ %.2lf\n",((salario - 4500) * 0.28) + ((salario -3000-(salario-4500)) * 0.18) + (salario - 2000 - (salario-4500)-(salario-(salario - 4500)-3000))* 0.08);
       
       

    

        
    }

    return 0;
}