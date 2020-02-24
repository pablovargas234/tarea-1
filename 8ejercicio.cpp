#include <stdio.h>
#include <stdlib.h>

int main (){

float N1,N2,N3;

printf("Ingrese el primer valor:");
scanf("%f", &N1);
printf("\nIngrese el segundo valor:");
scanf("%f", &N2);
printf("\nIngrese el tercer valor:");
scanf("%f", &N3);

if(N1<N2 && N1<N3){
    if(N2<N3){
        printf("\n%0.2f", N1);
        printf("\n%0.2f", N2);
        printf("\n%0.2f", N3);
    }
else{

        printf("\n%0.2f", N1);
        printf("\n%0.2f", N3);
        printf("\n%0.2f", N2);
}
}
if(N2<N1 && N2<N3){
    if(N1<N3){
        printf("\n%0.2f", N2);
        printf("\n%0.2f", N1);
        printf("\n%0.2f", N3);
}
else{

        printf("\n%0.2f", N2);
        printf("\n%0.2f", N3);
        printf("\n%0.2f", N1);
}
}
if(N3<N1 && N3<N2){

    if(N1<N2){
        printf("\n%0.2f", N3);
        printf("\n%0.2f", N1);
        printf("\n%0.2f", N2);
}
else{

        printf("\n%0.2f", N3);
        printf("\n%0.2f", N2);
        printf("\n%0.2f", N1);
}
}
if(N1==N3 && N3==N2){
    if(N1==N2){

        printf("\nTodods los numeros son iguales\n");
    }
}
}
