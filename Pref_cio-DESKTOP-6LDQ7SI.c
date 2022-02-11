#include <stdio.h>
int main()
{
    // 0 <= r <= a-1
    int a, b, q = 0, r = 0, i, j, comparador = 0, salvaq = 0;
    scanf("%d %d", &a, &b);
    // a = 7/b=3
    if (a < 0 && b > 0)
    {

        for (r = 0; r <= b - 1; r++)
        {
            // r = 1
            for (q = 1;; q--)
            {
                // q = -1
                comparador = b * q + r;
                // comparador = 2 * -1 + 1
                // comparador = -1
                if (comparador == a || comparador < a)
                {
                    break;
                }
            }
            if (comparador == a)
            {
                break;
            }
        }
    }
    if (a > 0 && b > 0)
    {
        if (b > a)
        {
            q = 0;
            r = a;
        }
        else
        {
            for (r = b - 1; r >= 0; r--)
            {
                // r = 1
                for (q = 1;; q++)
                {
                    // q = 3
                    comparador = b * q + r;
                    // comparador = 3 * 2 + 1
                    // comparador = 7
                    if (comparador == a || comparador > a)
                    {
                        break;
                    }
                }
                if (comparador == a)
                {
                    break;
                }
            }
        }
    }
    if (a < 0 && b < 0)
    {

        for (r = 0; r <= (b * -1) - 1; r++)
        {
            // r = 2
            for (q = 0;; q++)
            {
                // q = 3
                comparador = b * q + r;
                // comparador = -3 * 3 + 2
                // comparador = -7
                if (comparador == a || comparador < a)
                {
                    break;
                }
            }
            if (comparador == a)
            {
                break;
            }
        }
    }
    if (a > 0 && b < 0)
    {
         for (r = 0; r <= (b * -1) - 1; r++)
        {
            // r = 0
            for (q = -1;;q--)
            {
                // q = -4
                comparador = b * q + r;
                // comparador = -10 * -4 + 0
                // comparador = 40
                if (comparador == a || comparador > a)
                {
                    break;
                }
            }
            if (comparador == a)
            {
                break;
            }
        }
    }

    printf("%d %d\n", q, r);
    return 0;
}