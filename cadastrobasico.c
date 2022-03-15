#include <stdio.h>
#include <string.h>
struct pessoa{
    char nome[70];
    char cpf[17];
    int idade;


};
void cadastra(struct pessoa p[]){
    int idade;
    char cpf[17],nome[70];
    printf("\nSeu nome: \n");
    scanf("%[^\n]s",nome);
    setbuf(stdin,NULL);
    printf("\nSeu cpf: \n");
    scanf("%[^\n]s",cpf);
    setbuf(stdin,NULL);
    printf("\nSua idade: \n");
    scanf("%d",&idade);
    setbuf(stdin,NULL);
    strcpy(p[0].nome,nome);
    strcpy(p[0].cpf,cpf);
    p[0].idade = idade;
    return;
}
void printa(struct pessoa p[]){
    printf("%s\n",p[0].nome);
    printf("%s\n",p[0].cpf);
    printf("%d\n",p[0].idade);
    return;
}
int main(){
    struct pessoa p={0};
    cadastra(&p);
    printa(&p);
    return 0;
}