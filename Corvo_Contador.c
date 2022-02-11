#include <stdio.h>
#include <string.h>
int main()
{
    int contador=0, valor = 0;
    char frases[1000];
    while (contador < 3)
    {
        
        gets(frases);
        //frases=caw caw
        //valor=0
        //contador=3

        if(frases[0]=='*'){
            valor=valor+4;

        }
        if(frases[1]=='*'){
            valor=valor+2;
        }
        if(frases[2]=='*'){
            valor=valor+1;
        }
        else if (frases[0]=='c') 
        {
            printf("%d\n", valor);
            valor = 0;
            contador++;
            //contador=1
            // valor=0
        }
        
    }

    return 0;
}

