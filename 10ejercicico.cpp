#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_CTYPE, "Spanish");

float BT,AT,ATR,LA,LB,HTP,ATP,BR,AR,ARG;
int opt;

printf("1.-AREA DE UN TRIANDULO\n\n2.-AREA DE UN RECTANGULO\n\n3.-AREA DE UN TRAPECIO\n");
printf("\nSeleccione una opción:");
scanf("%d",&opt);

switch(opt){

case 1:
    printf("\nIntroduce la base del Triángulo:");
    scanf("%f",&BT);
    printf("\nIntroduce la altura del Triángulo:");
    scanf("%f",&AT);
    ATR = BT * AT /2;
    printf("\nEl área del Triángulo es: %0.2f\n",ATR);

    break;

case 2:
    printf("\nIntroduce la base del Rectángulo:");
    scanf("%f",&BR);
    printf("\nIntroduce la altura del Rectángulo:");
    scanf("%f",&AR);
    ARG = BR * AR;
    printf("\nEl área del Rectángulo es: %0.2f",ARG);

    break;

case 3:
    printf("\nIntroduce la altura del Trapecio:");
    scanf("%f",&AT);
    printf("\nIntroduce el lado A:");
    scanf("%f",&LA);
    printf("\nIntroduce el lado B:");
    scanf("%f",&LB);
    ATP = AT * (LA + LB) /2;
    printf("\nEl área del Trapecio es: %0.2f",ATP);

    break;

    default:
    printf("\nOPCION INVALIDA\n");
}
}
