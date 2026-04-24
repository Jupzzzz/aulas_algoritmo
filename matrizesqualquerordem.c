#include <stdio.h>
#include <stdlib.h>

int i,j,DL,DC;

int main(){
printf("Digite a dimencao da linha:\n");
scanf("%d",&DL);
printf("Digite a dimencao da coluna:\n");
scanf("%d",&DC);

int matriz[DL][DC];
printf("informe os valores da matriz de %i x %i com %i elementos:\n",DL,DC,DL*DC);
for ( i=0; i<DL; i++){
    for (j=0; j<DC; j++){
        scanf("%d",&matriz[i][j]);
    }
}
for ( i=0; i<DL; i++){
    for ( j=0; j<DC; j++){
        printf("|%2d",2*matriz[i][j]);
    }
        printf(" |\n");
}   
system("pause");
}
