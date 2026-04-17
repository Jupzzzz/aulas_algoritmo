#include <stdio.h>
#include <stdlib.h>

int i,j;
int matriz[3][3];

int main(){

printf("informe os valores da matriz de ordem 3:\n");
for ( i=0; i<3; i++){
    for (j=0; j<3; j++){
        scanf("%d",&matriz[i][j]);
    }
}
for ( i=0; i<3; i++){
    for ( j=0; j<3; j++){
        printf("|%4d",matriz[i][j]);
    }
        printf("|\n");
}   
system("pause");
}
