#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//variáveis dos loops do menu de questões
int i, j, operacao, q, elemento;
int matriz[3][5];

//funções úteis para os exercicios
void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void menuQuestao() {
    elemento=1;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            matriz[i][j]=elemento;
        elemento++;
        }
    }
    printf("+=================================+\n");
    printf("|           Menu  Questoes         \n");
    printf("+=================================+\n");
        for(i=0;i<3;i++){
            for(j=0;j<5;j++){
                printf("|%3i",matriz[i][j]);}
            printf("|\n");
        }
        

    printf("+=================================+\n");
    printf("|        Selecione a  Questao      \n");
    printf("+=================================+\n");

}
void questao01(){
    float q_watt;
    float salario_minimo, quantidade;
    printf("Questao 01 em desenvolvimento\n");
    printf("informe o valor do salario minimo:\n");
    scanf("%f",&salario_minimo);
    printf("informe a quantidade de quilo-watts:\n");
    scanf("%f",&quantidade);
    q_watt=(salario_minimo/700);
    printf("Valor do quilo-watt unitario..........: %f\n",q_watt);
    printf("Valor da conta de energia..........:%f\n",quantidade*q_watt);
    printf("Valor da conta com desconto.........:%f\n", 0.9*(quantidade*q_watt));
}
void questao02(){
    int tamanho;
    char frase[41];// 40 + \0
    printf("Questao 02 em desenvolvimento\n");
    
    getchar(); //limpa o \n do scanf anterior

    do{
    printf("Digite uma frase com no maximo 40 caracteres:\n");
    fgets(frase,sizeof(frase),stdin);

    tamanho=strlen(frase);

    if (frase[tamanho - 1] == '\n') { //verifica se veio com \n
        frase[tamanho - 1] = '\0';
        tamanho--;
    }else{
        //não veio \n - o usuário digitou mais de 40
        limparBuffer();
        tamanho=41; //força o erro e recomeça o loop
    }

    if (tamanho>40){
        printf("\n\nEntrada Invalida! A frase tem mais de 40 caracteres\n\n");
    }
    
    } while (tamanho>40);

    printf("Frase na vertical:\n");
    for (i=0;i<tamanho;i++){
        printf("%c\n",frase[i]);
        usleep(200000); // 200000 microssegundos = 0,2 segundo
    }    
}
void questao03(){
    int codigo, quantidade;
    float preco, total;
    printf("Questao 03 em desenvolvimento\n\n");

    printf("LANCHONETE - LANCHEBEM\n");
    printf("=================================\n");
    printf("Especificacao      Codigo  Preco\n");
    printf("Cachorro quente    100     4.20\n");
    printf("Bauru simples      101     3.30\n");
    printf("Bauru com ovo      102     5.50\n");
    printf("Hamburguer         103     6.20\n");
    printf("Cheeseburguer      104     5.30\n");
    printf("Refrigerante       105     4.50\n");
    printf("=================================\n");

    printf("Informe o codigo do item: \n");
    scanf("%d",&codigo);

    printf("Informe a quantidade: \n");
    scanf("%d",&quantidade);

    switch (codigo)
    {
    case 100:
        preco=4.20;
        break;
    case 101:
        preco=3.30;
        break;
    case 102:
        preco=5.50;
        break;
    case 103:
        preco=6.20;
        break;
    case 104:
        preco=5.30;
        break;
    case 105:
        preco=4.50;
        break;
    default:
        printf("Codigo Invalido!\n");
        break;
    }

    total=preco*quantidade;

    printf("Valor a pagar: R$ %.2f\n",total);
}
void questao04(){
    char sexo;
    float altura,peso_ideal;
    printf("Questao 04 em desenvolvimento\n");

    printf("Informe o Sexo (F/M) (F-Feminino e M-masculino): \n");
    scanf(" %c",&sexo);
    printf("Informe a altura em metros: \n");
    scanf("%f",&altura);

    switch (sexo)
    {
    case 'f':
    case 'F':
        peso_ideal=(62.1*altura)-44.7;
        printf("O peso ideal e: %.2f\n",peso_ideal);
        break;
    case 'm':
    case 'M':
        peso_ideal=(72.7*altura)-58;
        printf("O peso ideal e: %.2f\n",peso_ideal);
        break;
    default:
        printf("Informe um sexo valido!\n");
        break;
    }
}
void questao05(){
    float saldo_medio, credito;
    printf("Questao 05 em desenvolvimento\n");

    printf("Informe o saldo medio: \n");
    scanf("%f",&saldo_medio);

    if (saldo_medio>=0 && saldo_medio<=200){
        credito=0;
    }
    else if (saldo_medio<=400){
        credito=saldo_medio*0.20;
    }
    else if (saldo_medio<=600){
        credito=saldo_medio*0.30;
    }
    else{
        credito=saldo_medio*0.40;
    }

    printf("Saldo medio: %.2f\n",saldo_medio);
    printf("Valor do Credito: %.2f\n",credito);
}
void questao06(){
    char nome[100];
    int total=0,vogais=0;
    float porcentagem;
    printf("Questao 06 em desenvolvimento\n");

    printf("Digite um nome: \n");
    scanf(" %[^\n]",nome);

    total=strlen(nome);

    for (i=0;i<total;i++){
        if (nome[i]=='a' || nome[i]=='A' ||
            nome[i]=='e' || nome[i]=='E' ||
            nome[i]=='i' || nome[i]=='I' ||
            nome[i]=='o' || nome[i]=='O' ||
            nome[i]=='u' || nome[i]=='U'){
            
            vogais++;
        }
    }
    porcentagem=(vogais*100.0)/total;

    printf("Total de caracteres: %d\n",total);
    printf("Quantidade de Vogais: %d\n",vogais);
    printf("Porcentagem de vogais: %.2f%%\n",porcentagem);
}
void questao07(){
    int idade, dias;
    printf("Questao 07 em desenvolvimento\n");

    printf("Informe a Idade em Anos: ");
    scanf("%d",&idade);

    dias=idade*365;

    printf("Idade em Dias: %d\n",dias);

    if (dias<6570){
        printf("Voce e menor de idade\n");
    }else{
        printf("Voce e maior de idade\n");
    }
}
void questao08(){
    char clima;
    printf("Questao 08 em desenvolvimento\n");

    printf("Informe o Clima (N-Nublado, E-Ensolarado, C-Chuvoso): \n");
    scanf(" %c",&clima);

    switch (clima)
    {
    case 'N':
    case 'n':
        printf("\n\nTemperatura Agradavel\n\n");
        break;
    case 'E':
    case 'e':
        printf("\n\nTemperatura Quente\n\n");
        break;
    case 'C':
    case 'c':
        printf("\n\nTemperatura Fria\n\n");
        break;
    default:
        printf("\n\nClima Invalido!\n\n");
        break;
    }
}
void questao09(){
    int numero;
    printf("Questao 09 em desenvolvimento\n");

    printf("Digite um numero inteiro: \n");
    scanf("%d",&numero);

    printf("Numero: %d\n",numero);
    printf("Antecessor: %d\n",numero-1);
    printf("Sucessor: %d\n",numero+1);
}
void questao10(){
    int numero;
    printf("Questao 10 em desenvolvimento\n");

    printf("Digite um numero Inteiro: ");
    scanf("%d",&numero);

    if (numero%2==0){
        printf("Multiplo de 2\n");
    }
    if (numero%3==0){
        printf("Multiplo de 3\n");
    }
    if (numero%5==0){
        printf("Multiplo de 5\n");
    }
    if (numero%2!=0 && numero%3!=0 && numero%5!=0){
        printf("Nao e multiplo de 2, 3 ou 5\n");
    }
}
void questao11(){
    int n;
    printf("Questao 11 em desenvolvimento\n");
    
    printf("Informe a ordem da matriz quadrada:\n");
    scanf("%d",&n);

    int matriz[n][n];

    printf("Digite os valores da matriz %d x %d\n",n,n);
    //entrada dos valores
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    //imprimir matriz completa
    printf("\nMatriz completa:\n");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("|%d",matriz[i][j]);
        }
        printf("|\n");
    }
    //imprimir diagonal secundária
    printf("\nDiagonal Secundaria:\n");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (i+j==n-1){
                printf("%d \n",matriz[i][j]);
            }
        }
    }
    
}
void questao12(){
    int A[3][3], B[3][3], C[3][3];
    int k; //porque i e j já estao como variaveis globais
    printf("Questao 12 em desenvolvimento\n");

    //leitura da matriz A
    printf("\nDigite os valores da matriz A (3x3):\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            scanf("%d",&A[i][j]);
        }
    }
    //leitura da matriz B
    printf("\nDigite os valores da matriz B (3x3):\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            scanf("%d",&B[i][j]);
        }
    }
    //multiplicação
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            C[i][j]=0; //inicializa
            for ( k = 0; k < 3; k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    //imprimir a matriz A
    printf("\nMatriz A:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("|%4d", A[i][j]);
        }
        printf("|\n");
    }
      //imprimir a matriz B
    printf("\nMatriz B:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("|%4d", B[i][j]);
        }
        printf("|\n");
    }
    //imprimir matriz resultado
    printf("\nMatriz Resultado (A x B):\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("|%4d",C[i][j]);
        }
        printf("|\n");
    }
}
void questao13(){
    int A[2][2], B[2][2], C[2][2];
    printf("Questao 13 em desenvolvimento\n");

    //leitura da matriz A
    printf("Informe os valores da matriz A (2 x 2): \n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            scanf("%d",&A[i][j]);
        }
    }
    
    //leitura da matriz B
    printf("Informe os valores da matriz B (2 x 2): \n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            scanf("%d",&B[i][j]);
        }
    }
    
    //soma das matrizes
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    
    //imprimir a matriz A
    printf("\nMatriz A:\n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            printf("|%4d",A[i][j]);
        }
        printf("|\n");
    }
    
    //imprimir a matriz B
    printf("\nMatriz B:\n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            printf("|%4d",B[i][j]);
        }
        printf("|\n");
    }
    
    //imprimir matriz C (resultado)
    printf("\nMatriz soma (A + B): \n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            printf("|%4d",C[i][j]);
        }
        printf("|\n");
    }
}
void questao14(){
    int matriz[3][3];
    int soma=0;
    printf("Questao 14 em desenvolvimento\n");

    printf("Informe os valores da matriz 3 x 3: \n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    
    printf("\nMatriz:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("|%4d",matriz[i][j]);
        }
        printf("|\n");
    }
    
    for ( i = 0; i < 3; i++){
        soma+=matriz[i][i];
    }
    
    printf("\nSoma da diagonal principal: %d\n",soma);
}
void questao15(){
    int n;
    printf("Questao 15 em desenvolvimento\n");

    printf("Informe a ordem da matriz quadrada: ");
    scanf("%d",&n);

    float matriz[n][n];

    printf("\nInforme os valores da matriz %d x %d: \n",n,n);

    //entrada dos valores
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            scanf("%f",&matriz[i][j]);
        }
    }

    //dividindo os elementos por 2
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            matriz[i][j]=matriz[i][j]/2;
        }      
    }
    
    //impressão da matriz resultante
    printf("\nmatriz com elementos divididos por 2: \n");
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            printf("|%6.2f",matriz[i][j]);
        }
        printf("|\n");
    }
}
int main(){
do{
    menuQuestao();
    switch (q)
    {
    case 1:
        questao01();
        break;
    
    case 2:
        questao02();
        break;

    case 3:
        questao03();
        break;
    
    case 4:
        questao04();
        break;

    case 5:
        questao05();
        break;
    
    case 6:
        questao06();
        break;

    case 7:
        questao07();
        break;
    
    case 8:
        questao08();
        break;

    case 9:
        questao09();
        break;
    
    case 10:
        questao10();
        break;

    case 11:
        questao11();
        break;
    
    case 12:
        questao12();
        break;

    case 13:
        questao13();
        break;
    
    case 14:
        questao14();
        break;

    case 15:
        questao15();
        break;
    }

    printf("Deseja executar outra questao ou zero p/ sair\n");
    scanf("%i",&q);
} while (q!=0);
}

