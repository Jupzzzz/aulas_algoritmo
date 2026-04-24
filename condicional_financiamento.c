#include<stdio.h>



int main(){

float salario;

//recebendo o valor do salário
printf("Digite o salário: \n");
scanf("%f",&salario);

//realizando os testes de condição
if (salario>1800.00 && salario<8000.00){
    printf("Salário válido para financiamento.\n");
} else {
    printf("Salário fora da faixa permitida para financiamento\n");}

};