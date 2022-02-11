#include <stdio.h>
#include <string.h>
int main()
{
    char palavra1[20];
    char palavra2[20];
    char palavra3[20];
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);
    if (strcmp(palavra1, "vertebrado") == 0)
    {
        if (strcmp(palavra2, "ave") == 0)
        {
            if (strcmp(palavra3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
        }
    }
    //vertebrado ave carnivoro

    if (strcmp(palavra1, "vertebrado") == 0)
    {
        if (strcmp(palavra2, "ave") == 0)
        {
            if (strcmp(palavra3, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
    }
    //vertebrado ave onivoro

    if (strcmp(palavra1, "vertebrado") == 0)
    {
        if (strcmp(palavra2, "mamifero") == 0)
        {
            if (strcmp(palavra3, "onivoro") == 0)
            {
                printf("homem\n");
            }
        }
    }
    //vertebrado mamifero onivoro

    if (strcmp(palavra1, "vertebrado") == 0)
    {
        if (strcmp(palavra2, "mamifero") == 0)
        {
            if (strcmp(palavra3, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    //vertebrado mamifero herbivoro

    if (strcmp(palavra1, "invertebrado") == 0)
    {
        if (strcmp(palavra2, "inseto") == 0)
        {
            if (strcmp(palavra3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
        }
    }

    //invertebrado inseto hematofago

    if (strcmp(palavra1, "invertebrado") == 0)
    {
        if (strcmp(palavra2, "inseto") == 0)
        {
            if (strcmp(palavra3, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
    }
    //invertebrado inseto herbivoro

    if (strcmp(palavra1, "invertebrado") == 0)
    {
        if (strcmp(palavra2, "anelideo") == 0)
        {
            if (strcmp(palavra3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
        }
    }
    //invertebrado anelideo hematofago

    if (strcmp(palavra1, "invertebrado") == 0)
    {
        if (strcmp(palavra2, "anelideo") == 0)
        {
            if (strcmp(palavra3, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }
    //invertebrado anelideo minhoca

    return 0;
}