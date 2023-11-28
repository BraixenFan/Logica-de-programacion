#include <stdio.h>
#include <math.h>
int main(){
    int lado1,lado2,lado3;
    int Error = 0;
    float semi, area;
    
    printf("Bienvenido, este programa calculará el area de un triangulo solamente a partir de la longitud de sus lados\n");
    printf("A continuación, digita con números enteros la longitud de uno de los lados del triangulo en centimetros \n");
    scanf("%d", &lado1);
    printf("Muy bien, ahora, digita con números enteros la longitud de otro de los lados del triangulo en centimetros \n");
    scanf("%d", &lado2);
    printf("Y finalmente, digita con números enteros la longitud del lado restante del triangulo en centimetros \n");
    scanf("%d", &lado3);

    if (lado1 + lado2 < lado3 | lado1 + lado3 < lado2 | lado2 + lado3 < lado1)
        {Error = 1;}
    if (lado1 <= 0 | lado2 <= 0 | lado3 <= 0)
        {Error = 2;}

    if (Error == 1)
        {printf("Lo sentimos, pero las medidas que introdujiste no pueden crear un triangulo, por favor, reinicia el programa e introduce nuevos valores validos");}
    if (Error == 2)
        {printf("Parece que has introducido un valor invalido, ten en cuenta que este programa solo trabaja con numeros enteros positivos, por favor, reinicia el programa e introduce nuevos valores validos");}
    
    if (Error == 0)
        {
            semi = (lado1 + lado2 + lado3)/2;
            area = sqrtf(semi*(semi-lado1)*(semi-lado2)*(semi-lado3));
            printf("El triangulo que introdujiste tiene un área de %3.2f centimetros cuadrados \n", area);
            printf("Gracias por usar el programa");
        }
return 0;
}