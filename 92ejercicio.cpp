#include <stdio.h>
#include <stdlib.h>

int main (){

int P;

printf("Ingrese un dato:");
scanf("%d",&P);

if(P>=0 && P<=9){

    printf("\nEs un numero\n");

}
else{
    printf("\nEs una letra\n");

}

}
