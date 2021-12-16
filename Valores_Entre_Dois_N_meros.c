#include <stdio.h>
int main()
{
    int A, B;
    scanf(" %d%d ", &A, &B);//2 3
    if(A > B)
    {
        for (B; A >= B; B++)
        {
            printf("%d ", B);
        }
    }else{
        for (A; A <= B; A++)
        {
            printf("%d ", A);
        }

    }

    return 0;
}