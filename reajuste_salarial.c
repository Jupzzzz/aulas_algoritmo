/*Implemente um algoritmo que receba o nome do funcionário o salário e calcule um 
reajuste de 10% . Imprimir o nome, salário anterior, salário novo e reajuste*/

#include<stdio.h>

float salario_antigo, salario_novo, valor_reajuste;
float percentual=0.10 ; // acrescimo de 10%
char nome [100];

int main(){
printf("Digite o Nome do Funcionário:\n");
scanf(" %[^\n]", nome);
// scanf("%s",nome);

printf("Digite o Salário Antigo:\n");
scanf("%f",&salario_antigo);

valor_reajuste=salario_antigo*percentual;
salario_novo=salario_antigo+valor_reajuste;

// salario_novo=salario_antigo*reajuste;

printf("O nome é : %s\n", nome);
printf("Salário Antigo: %f\n", salario_antigo);
printf("Salário Novo: %f\n", salario_novo);
printf("Valor do reajuste: %f\n", valor_reajuste);

};