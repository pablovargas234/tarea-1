#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_CTYPE, "Spanish");

int Edad;
float Entrada,Descuento,Precio;

printf("introduzca la edad:");

scanf("%d", &Edad);
printf("\nintroduzca el valor de la entrada $:");
scanf("%f", &Entrada);

if(Edad<=12){
Descuento = Entrada * 0.60;
Precio = Entrada - Descuento;
printf("\nel precio de la entrada para niños es: $%0.2f\n", Precio);
}

else if (Edad>=60){
Descuento = Entrada * 0.55;
Precio = Entrada - Descuento;
printf ("\nel precio para mayores de edad es: $%0.2f\n", Precio);
}

else{
    (Edad>=13 && Edad<=59);
Precio = Entrada;
printf("\nel precio final de la entrada para mayores es: $%0.2f\n", Precio);
}

}
