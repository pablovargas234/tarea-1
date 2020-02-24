#include <stdio.h>
#include <stdlib.h>

int main(){


int P;

printf("ingrese un dato:");
scanf("%d",&P);

switch(P){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
    printf("\nEs un numero\n");
    break;
default:
    printf("\nEs una letra\n");
}
}

