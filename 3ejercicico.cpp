#include <stdio.h>
#include <stdlib.h>

int main (){
int N1;


printf("introduzaca un numero:");
scanf("%d", &N1);

if(N1%2==0){

    printf("\nel numero que se introdujo es par\n");
}
else if(N1%3==0){
printf ("\nel numero introducido es impar se debe a que es divisible entre 3\n");
}

else{
    printf("\nel numero introducido es impar\n");
}
}
