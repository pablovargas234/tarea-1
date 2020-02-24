#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_CTYPE, "Spanish");

int N1,N2,N3;

printf("introduzca el primer valor:");
scanf("%d", &N1);
printf("\nintroduzca el segundo valor:");
scanf("%d", &N2);
printf("\nintroduzca el tercer valor:");
scanf("%d", &N3);

if(N1==3 && N2==9 && N3==5){
    printf("\nACCESO CONCEDIDO\n");
}
else{
    printf("\nACCESO DENEGADO\n");
}
}
