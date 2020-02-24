#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

float x,Rango;

printf("ingrese el valor de x:");
scanf("%f", &x);


if(x<=0){
    Rango = x + 3;
printf("\n el valor del rango es: %0.2f\n", Rango);
}
else{
    (x>0);
    Rango = pow(x,2) + 2 * x;
printf("\nel valor del rango es: %0.2f\n", Rango);
}
}
