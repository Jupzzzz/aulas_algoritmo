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
    MenuOperacao();
if(operacao==1){
    Entrada();
    Somar();
    Saida();
    system("pause");                           // pressione qualquer tecla para continuar ...
}
if(operacao==2){
    Entrada();
    Subtrair();
    Saida();
    system("pause");
}
if(operacao==3){
    Entrada();
    Multiplicar();
    Saida();
    system("pause");
}
if(operacao==4){
    Entrada();
    Dividir();
    Saida();
    system("pause");
}
}

