#include <stdio.h>
#include <stdlib.h>

/*
  TRABALHAREMOS COM DATA DD/MM/AA
  HORARIOS 9 as 12h - SE MARCA APENAS UMA HORA


*/
struct cliente
{
    char nome[100];
    char cpf[16];
};

struct data
{
    char data[9];
    int hora;
};

struct quadra
{
    struct cliente clientes[12 * 365];
    struct data datas[12 * 365];
    int reservas;
};

void cadastro()
{
    struct cliente cliente;
    printf("Digite seu nome\n");
    fgets(cliente.nome,100,stdin);
    printf("Digite seu cpf\n");
    fgets(cliente.cpf,16,stdin);
    printf("Confira seu nome\n");
    printf("%s\n",cliente.nome);
    printf("Confira seu Cpf\n");
    printf("%s\n",cliente.cpf);
}

void mostra()
{
    // inserir código aqui
}

void mostra1()
{
    // inserir código aqui
}

void menu()
{
    int opcao;
    //struct quadra q[2];

    while (1)
    {
        printf("\nBem vindo ao Sistema de Gerenciameto de Quadras ");
        printf("\n1- Agendar");
        printf("\n2- Cancelar Agendamento");
        printf("\n3- Reagendar");
        printf("\n4- Mostrar Todos Agendamentos");
        printf("\n5- Mostrar Agendamentos por Data");
        printf("\n6- Mostrar Agendamento do cliente X");
        printf("\n7- Mostrar Todos Horarios Vagos por Data");
        printf("\n8- Gravar dados e Sair");
        printf("\nDigite opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
            cadastro();
        if (opcao == 2)
            mostra();
        if (opcao == 3)
            mostra1();
        if (opcao == 4)
            mostra1();
        if (opcao == 5)
            mostra1();
        if (opcao == 6)
            mostra1();
        if (opcao == 7)
            mostra1();
        if (opcao == 8)
            return;
    }
}
int main()
{
    menu();
}