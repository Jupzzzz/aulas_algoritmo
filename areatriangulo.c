#include<stdio.h>
float area,base,altura;

void calculo () {
    area=(base*altura)/2;
}

int main () {
    printf("Digite a base:\n");
    scanf("%f",&base);
    printf("Digite a altura:\n");
    scanf("%f",&altura);
    calculo();
    printf("O valor da Area eh de : %f",area);
}