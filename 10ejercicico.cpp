#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_CTYPE, "Spanish");

float BT,AT,ATR,LA,LB,HTP,ATP,BR,AR,ARG;
int opt;

printf("1.-AREA DE UN TRIANDULO\n\n2.-AREA DE UN RECTANGULO\n\n3.-AREA DE UN TRAPECIO\n");
printf("\nSeleccione una opci�n:");
scanf("%d",&opt);

switch(opt){

case 1:
    printf("\nIntroduce la base del Tri�ngulo:");
    scanf("%f",&BT);
    printf("\nIntroduce la altura del Tri�ngulo:");
    scanf("%f",&AT);
    ATR = BT * AT /2;
    printf("\nEl �rea del Tri�ngulo es: %0.2f\n",ATR);

    break;

case 2:
    printf("\nIntroduce la base del Rect�ngulo:");
    scanf("%f",&BR);
    printf("\nIntroduce la altura del Rect�ngulo:");
    scanf("%f",&AR);
    ARG = BR * AR;
    printf("\nEl �rea del Rect�ngulo es: %0.2f",ARG);

    break;

case 3:
    printf("\nIntroduce la altura del Trapecio:");
    scanf("%f",&AT);
    printf("\nIntroduce el lado A:");
    scanf("%f",&LA);
    printf("\nIntroduce el lado B:");
    scanf("%f",&LB);
    ATP = AT * (LA + LB) /2;
    printf("\nEl �rea del Trapecio es: %0.2f",ATP);

    break;

    default:
    printf("\nOPCION INVALIDA\n");
}
}
