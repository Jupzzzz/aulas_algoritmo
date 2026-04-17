#include <stdio.h>
#include <stdlib.h>

int i, j, operacao, q, elemento;
int matriz[3][5];

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
    printf("Questao 01 em desenvolvimento\n");
}
void questao02(){
    printf("Questao 02 em desenvolvimento\n");
}
void questao03(){
    printf("Questao 03 em desenvolvimento\n");
}
void questao04(){
    printf("Questao 04 em desenvolvimento\n");
}
void questao05(){
    printf("Questao 05 em desenvolvimento\n");
}
void questao06(){
    printf("Questao 06 em desenvolvimento\n");
}
void questao07(){
    printf("Questao 07 em desenvolvimento\n");
}
void questao08(){
    printf("Questao 08 em desenvolvimento\n");
}
void questao09(){
    printf("Questao 09 em desenvolvimento\n");
}
void questao10(){
    printf("Questao 10 em desenvolvimento\n");
}
void questao11(){
    printf("Questao 11 em desenvolvimento\n");
}
void questao12(){
    printf("Questao 12 em desenvolvimento\n");
}
void questao13(){
    printf("Questao 13 em desenvolvimento\n");
}
void questao14(){
    printf("Questao 14 em desenvolvimento\n");
}
void questao15(){
    printf("Questao 15 em desenvolvimento\n");
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

switch (expression)
{
case constant expression:
    /* code */
    break;

default:
    break;
}
