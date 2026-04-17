#include<stdio.h>



int main(){

int idade;

//recebendo a idade
printf("Digite a sua idade: \n");
scanf("%d",&idade);

//realizando os testes de condição
if (idade>95 || idade<18){
    printf("Você não pode tirar a carteira de motorista.\n");
} 
else{
    printf("Você pode possuir carteira de motorista\n");
}

};