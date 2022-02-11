#include <stdio.h>
int main()
{
    int L=0, Vi=0, veloz = 0, j = 0;
    while (scanf("%d", &L) != EOF)
    {
        for (L; L > 0; L--)
        {
            scanf("%d", &Vi);
            j++;
            if (j == 1)
            {
                veloz = Vi;
            }
            if (Vi > veloz)
            {
                veloz = Vi;
            }
        }
        if(veloz < 10){
            printf("1\n");

        }
        if(veloz >= 10 && veloz < 20){
            printf("2\n");

        }
        if(veloz >= 20){
            printf("3\n");

        }
        veloz=0;
        j=0;
        Vi=0;
        L=0;

    }
    return 0;
}