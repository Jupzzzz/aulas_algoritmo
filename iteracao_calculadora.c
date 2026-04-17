#include<stdio.h>
#include<stdlib.h>

// definição das variáveis
int valor1,valor2,resultado,operacao;

// entrada de valores
void Entrada(){
    printf("Digite o primeiro valor:\n");
    scanf("%i",&valor1);
    printf("Digite o segundo valor:\n");
    scanf("%i",&valor2);
}

// funções da calculadora
void Somar(){
    resultado=valor1+valor2;
}

void Subtrair(){
    resultado=valor1-valor2;
}

void Multiplicar(){
    resultado=valor1*valor2;
}

void Dividir(){
    resultado=valor1/valor2;
}

void Saida(){
    printf("O resultado da operação é: %i\n",resultado);
}

// menu de operação
void MenuOperacao(){
    printf("+==========================================+\n");
    printf("+         CALCULADORA SIMPLES              +\n");
    printf("+------------------------------------------+\n");
    printf("+    1 - SOMAR     |       2 - SUBTRAIR    +\n");
    printf("+------------------------------------------+\n");
    printf("+  3 - MULTIPLICAR |       4 - DIVIDIR     +\n");
    printf("+==========================================+\n"); 
    printf("Digite a operação desejada ou zero p/ sair: \n");
    scanf("%i",&operacao);
}

// main

int main(){

    system("cls");                             //limpa a tela
do{
    MenuOperacao();

    switch (operacao)
    {
    case 1: //somar
         Entrada();
         Somar();
         Saida();
        break;
    case 2: //subtração
         Entrada();
         Subtrair();
         Saida();
        break;
    case 3: //multiplicação
         Entrada();
         Multiplicar();
         Saida();
        break;
    case 4: // divisão
         Entrada();
         Dividir();
         Saida();
        break;
    }
    printf("Digite qualquer tecla para uma nova operação ou ZERO p/ sair\n");
    scanf("%i",&operacao);
}while (operacao!=0);

}

