#include <stdio.h>
#include <string.h>

char sigla[2];

int main(){
    printf("Digite a sigla do seu Estado do Nordeste:\n");
    scanf("%s", sigla);

    if (strcmp(sigla, "PI") == 0){
        printf("Voce eh Piauiense\n");
    }
    else if (strcmp(sigla, "AL") == 0){
        printf("Voce eh Alagoano\n");
    } 
    else if (strcmp(sigla, "BA") == 0){
        printf("Voce eh Baiano\n");
    }
    else if (strcmp(sigla, "CE") == 0){
        printf("Voce eh Cearense\n");
    }
    else if (strcmp(sigla, "MA") == 0){
        printf("Voce eh Maranhense\n");
    }
    else if (strcmp(sigla, "PB") == 0){
        printf("Voce eh Paraibano\n");
    }
    else if (strcmp(sigla, "PE") == 0){
        printf("Voce eh Pernambucano\n");
    }
    else if (strcmp(sigla, "RN") == 0){
        printf("Voce eh Norte-Rio-Grandense\n");
    }
    else if (strcmp(sigla, "SE") == 0){
        printf("Voce eh Sergipano\n");
    }
    else{
        printf("Digite uma Sigla valida\n");
    }
}