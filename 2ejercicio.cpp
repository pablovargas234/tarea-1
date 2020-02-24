#include <stdio.h>
#include <stdlib.h>
int main (){

int N1,N2;

printf("introduce un numero:\n");
scanf("%d", &N1);
printf("\nintroduce otro numero:\n");
scanf("%d", &N2);

if(N1%N2==0){
    printf("\nel primero es divisible entre el segundo\n");
}
else{
    printf("\nel primero no es divisible entre el segundo numero\n");
}

}
