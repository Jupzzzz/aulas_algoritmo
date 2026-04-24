/*Implementar um Algoritmo utilizando a função Struct para cadastrar
5 títulos, com os seguintes dados ( Código Titulo, Nome Cliente, Data
vencimento, tipo titulo e valor do titulo)*/
#include<stdio.h>
#include<stdlib.h>
int i, quant, stop;

struct titulo
{
int codigo;
char nome[50];
char data[11]; // data de vencimento
char tipo[8]; // "pagar" ou "receber"
float valor;
}titulo;

int main(){
    
    do
    {
        printf("Informe a quantidade de titulos que deseja cadastrar: \n");
        scanf("%i",&quant);
    
    struct titulo quantidade[quant];
    for ( i = 0; i < quant; i++)
    {
        printf("%d - Informe o codigo do titulo : ",i);
        scanf("%d",&quantidade[i].codigo);
        printf("%d - Informe o nome do cliente : ",i);
        scanf(" %[^\n]",quantidade[i].nome);
        printf("%d - Informe a data de vencimento : ",i);
        scanf("%s",quantidade[i].data);
        printf("%d - Informe o tipo ('pagar' ou 'receber') : ",i);
        scanf("%s",quantidade[i].tipo);
        printf("%d - Informe o valor : ",i);
        scanf("%f",&quantidade[i].valor);
        printf("\n\n\n");
    }
    for ( i = 0; i < quant; i++)
    {
        printf("------------------------------\n");
        printf("Titulo numero...: %i\n",i);
        printf("------------------------------\n");
        printf("Codigo...: %d\n",quantidade[i].codigo);
        printf("Nome.....: %s\n",quantidade[i].nome);
        printf("Data Venc: %s\n",quantidade[i].data);
        printf("Tipo.....: %s\n",quantidade[i].tipo);
        printf("Valor....: %f\n",quantidade[i].valor);
        printf("------------------------------\n");
    }

    printf("Digite qualquer valor pra continuar e zero para sair");
    scanf("%d",&stop);

    } while (stop!=0);
    

}

