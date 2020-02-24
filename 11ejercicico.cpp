#include <stdio.h>
#include <stdlib.h>

int main(){

float X1,Y1,X2,Y2,m,A,B;


printf("introduzca los valores del punto uno\n");
printf("\nIntroduzca el valor X1:");
scanf("%f",&X1);
printf("\nIntroduzca el valor Y1:");
scanf("%f",&Y1);


printf("\nIntroduzca los valores del punto dos\n");
printf("\nIntroduzca X2:");
scanf("%f",&X2);
printf("\nIntroduzca Y2:");
scanf("%f",&Y 2);

    A = (Y2-Y1);
    B = (X2-X1);

    while(B==0){

    printf("\nERROR,como X1 es igual que X2 no existe una pendiente, entonces, lla pendiente es una linea\n");
    printf("Modifique las coordinadas\n");
    printf("\nIntroduzca el nuevo valor de X1:");
    scanf("%f",&X1);
    printf("\nIntroduzca el nuevo valor de X2:");
    scanf("%f",&X2);
    if(X1!=X2){

        printf("\nEl valor de b es: %0.2f\n", B=(X2-X1));
    }
    }
    m= A / B;

printf("\nEl valor de la pendiente es: %0.2f\n",m);
}
