/*Implementar um Algoritmo utilizando a função Struct para cadastrar
4 notas e calcular a média, com os seguintes dados (Nome do Aluno,
Nota, e média*/

#include<stdio.h>
#include<stdlib.h>

struct cadastrar_nota
{
char nome_aluno[50];
float nota;
};

int main()
{
    int i;
    float soma=0, media;
    struct cadastrar_nota contagem[4];

    for ( i = 0; i < 4; i++)
    {
        printf("%d - Informe o nome do aluno : ", i + 1);
        scanf("%s",contagem[i].nome_aluno);
        printf("%d - Informe a nota do aluno : ", i + 1);
        scanf("%f",&contagem[i].nota);

        soma += contagem[i].nota;
    }
    

    media = soma/4;

    printf("\n ----- Dados dos Alunos -----\n");
    for ( i = 0; i < 4; i++)
    {
        printf("Aluno: %s | Nota: %.2f \n",contagem[i].nome_aluno,contagem[i].nota);

    }
    
    printf("\nMedia da Turma: %.2f\n",media);

    return 0;

}