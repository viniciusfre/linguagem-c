#include <stdio.h>
int main()
{
    int dia1, dia2, dia3,validador=0;
    scanf("%d %d %d", &dia1, &dia2, &dia3);
    // primeira figura
    // 10 8 10
    // 10 8 8
    if (dia1 > dia2 && dia2 <= dia3)
    {
        printf(":)\n");
        validador=1;
    }
    // segunda figura
    // 10 12 10
    // 10 12 12
    else if (dia2 > dia1 && dia2 >= dia3)
    {
        printf(":(\n");
        validador=1;
    }
    // terceira figura
    // 10 13 14
    //3-2 < 2-1
    else if (dia2 > dia1 && dia3 > dia2 && dia2 - dia1 > dia3 - dia2)
    {
        printf(":(\n");
        validador=1;
    }
    // quarta figura
    else if (dia2 > dia1 && dia3 > dia2 && dia3 - dia2 >= dia2 - dia1)
    {
        printf(":)\n");
        validador=1;
    }
    // quinta figura
    else if (dia1 > dia2 && dia2 > dia3 && dia1 - dia2 > dia2 - dia3)
    {
        printf(":)\n");
        validador=1;
    }
    // sexta figura
    //10 8 6
    //dia2-dia3 >= dia1-dia2
    else if (dia1 > dia2 && dia2 > dia3 && dia2 - dia3 >= dia1 - dia2)
    {
        printf(":(\n");
        validador=1;
    }
    // setima figura
    else if (dia1 == dia2)
    {
        if (dia2 > dia3)
        {
            printf(":(\n");
            validador=1;
        }
        else if (dia3 > dia2)
        {
            printf(":)\n");
            validador=1;
        }
    }
    // oitava figura
    if(validador == 0){
        printf(":(\n");
    }

    return 0;
}