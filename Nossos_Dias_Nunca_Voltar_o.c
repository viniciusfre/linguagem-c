#include <stdio.h>
#include <string.h>
int main()
{
    // LIFE IS NOT A PROBLEM TO BE SOLVED\0
    int N, i = 0;
    char palavra[34] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    scanf("%d", &N);
    for (N; N > 0; N--)
    {
        if (N == 1)
        {
            printf("%c\n", palavra[i]);
            break;
        }
        else
        {
            printf("%c", palavra[i]);
            i++;
        }
    }
    return 0;
}
