/*
Desenvolva um algoritmo que receba o nome do aluno, 
curso, disciplina e período.Armazene os dados num arquivo texto.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
FILE *arquivo;
char nome[50], curso[50], disciplina[50], periodo[6];
int operacao;

void CriarArquivo (){
    arquivo = fopen("C://icev//DadosAluno.txt","w+");
    if(arquivo == 0){
        printf("Errro na criacao do arquivo\n");
    }else{
        printf("Arquivo criado com sucesso!!\n");
    }
}
void CadastrarAluno(){
    printf("Digite seu nome:\n");
    scanf(" %[^\n]",nome);
    printf("Digite o curso:\n");
    scanf(" %[^\n]",curso);
    printf("Informe a disciplina:\n");
    scanf(" %[^\n]",disciplina);
    printf("Informe o periodo:\n");
    scanf("%s",periodo);
}
void GravarArquivo(){
    CriarArquivo();
    fprintf(arquivo,"Aluno......:%s\n",nome);
    fprintf(arquivo,"Curso.....:%s\n",curso);
    fprintf(arquivo,"Disciplina:%s\n",disciplina);
    fprintf(arquivo,"Periodo...:%s\n",periodo);
    fclose(arquivo);
}

int main(){

do{
    CadastrarAluno();
    GravarArquivo();

printf("Digite um valor diferente de zero para executar novamente\n");
scanf("%i",&operacao);
}while (operacao!=0);
}