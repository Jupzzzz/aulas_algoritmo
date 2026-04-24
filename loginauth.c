#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char usuario[50],senha[15],descricao[50];
int codigoProduto, operacao, loginAtivo, opMenu, quantidade;
float valorProduto, valorTotal;

void menuPrincipal(){
    printf("+===========================================+\n");
    printf("|             Sistema de Venda              |\n");
    printf("+===========================================+\n");
    printf("|  1-Gerar Pedido | 2- Emitir Cupom         |\n");
    printf("+===========================================+\n");
    printf("Informe a operacao desejada:\n");
    scanf("%i",&opMenu);
}
void efetuarLogin(){
    printf("+===========================================+\n");
    printf("|           Acesso a Aplicacao              |\n");
    printf("+===========================================+\n");
    printf("Usuario.....:\n");
    scanf("%s",usuario);
    printf("Senha.......:\n");
    scanf("%s",senha);
    printf("+===========================================+\n");
    printf("|                Sisvenda                   |\n");
    printf("+===========================================+\n");
    if (strcmp(usuario,"admin")==0 && strcmp(senha,"admin")==0){
        menuPrincipal();
        loginAtivo=1;
    }else{
        printf("Usuario ou senha invalida\n");
    }
}
void gerarPedido(){
    printf("Digite o codigo do produto:\n");
    scanf("%i",&codigoProduto);
    printf("Digite a descricao do produto:\n");
    scanf(" %[^\n]",descricao);
    printf("Digite a quantidade:\n");
    scanf("%i",&quantidade);
    printf("Digite o valor do produto:\n");
    scanf("%f",&valorProduto);
    valorTotal=quantidade*valorProduto;
}
void emitirCupom(){
    printf("+===========================================+\n");
    printf("|                 CUPOM FISCAL              |\n");
    printf("+===========================================+\n");
    printf("Codigo.............:%i\n",codigoProduto);
    printf("Produto............:%s\n",descricao);
    printf("Quantidade.........:%i\n",quantidade);
    printf("Valor Produto......:%f\n",valorProduto);
    printf("+===========================================+\n");
    printf("|Total Venda...................R$:%.2f\n    |\n",valorTotal);
    printf("+===========================================+\n");
}
int main(){
do{
    if (loginAtivo==1){
        menuPrincipal();
    }else{
        efetuarLogin();
    }
    switch (opMenu){
    case 1:
        gerarPedido();
        break;
    
    case 2:
        emitirCupom();
        break;
    }
printf("Digite um valor diferente de zero para executar novamente\n");
scanf("%i",&operacao);
}while (operacao!=0);

}