#include <stdio.h>
int main()
{
    double A, B, C, D, E, F;
    scanf("%lf%lf%lf", &D, &E, &F);
    if (D > E && D > F)
    {
        A = D;
        if (E > F)
        {
            B = E;
            C = F;
        }
    }
    // D>F>E
    if(D > F && D > E){
        A = D;
        if(F>E){
            B = F;
            C = E;
        }


    }
    // E>D>F
    if(E > D && E>F){
        A = E;
        if(D > F){
            B = D;
            C = F;

        }

    }
    // E>F>D
    if(E > F && E > D){
        A = E;
        if(F > D){
            B = F;
            C = D;

        }

    }
    // F>D>E
    if(F > D && F> E){
        A = F;
        if(D > E){
            B = D;
            C = E;

        }
        
    }
    // F>E>D
    if(F > E && F > D){
        A = F;
        if(E > D){
            B = E;
            C = D;

        }
        
    }
    // D==F D!=E
    if(D == F && D!= E){
        if(D > E){
            A = D;
            B = D;
            C = E;

        }else{
            A = E;
            B = D;
            C = D;
        }
        

        
    }
    // D==E D!=F
    if(D == E && D!= F){
        if(D > F){
            A = D;
            B = D;
            C = F;

        }else{
            A = F;
            B = D;
            C = D;

        }
        
        
    }
    // E==F E!=D
    if(E==F && E!=D){
        if(E > D){
            A = E;
            B = E;
            C = D;

        }else{
            A = D;
            B = E;
            C = E;
        }

        
    }
    //D == E == F
    if(D == E && D == F){
        A = D;
        B = D;
        C = D;


    }
    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if (A * A == B * B + C * C)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if (A * A > B * B + C * C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (A * A < B * B + C * C)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && A == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (A == B && C != A)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    if (A == C && B != A)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    if (C == B && A != C)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
