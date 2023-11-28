#include <stdio.h>
int main(){
    int peso, altura, gen;
    float res;
    printf("Bienvenido, este programa calculará tu Índice de masa corporal \n");
    printf("A continuación, presiona 1 si eres Hombre o presiona 2 si eres Mujer \n \n");
    scanf("%i", &gen);
    if (gen == 1 | gen == 2)
    {
        printf("Perfecto, ahora teclea tu peso en Kilogramos \n");
        scanf(" %i", &peso);
        printf("Ahora, teclea tu altura en centimetros \n");
        scanf(" %i",&altura);
        res = peso / (altura * altura);
        if (gen == 1)
        {
            if(res <= 18.4)
            {
                printf("Tu IMC es de %f, esto significa que eres muy bajo de peso :c", res);
            } else if(res >= 18.5 & res <= 24.9)
            {
                printf("Tu IMC es de %f, esto significa que estas en un buen peso saludable", res);
            } else if(res >= 25 & res <= 29.9)
            {
                printf("Tu IMC es de %f, esto significa que tienes un ligero sobrepeso", res);
            } else
            {
                printf("Tu IMC es de %f, esto significa que tienes obesidad", res);
            }
        }
        if (gen == 2)
        {
            if(res <= 18.4)
            {
                printf("Tu IMC es de %f, esto significa que eres muy bajo de peso :c", res);
            } else if(res >= 18.5 & res <= 24.9)
            {
                printf("Tu IMC es de %f, esto significa que estas en un buen peso saludable", res);
            } else if(res >= 25 & res <= 29.9)
            {
                printf("Tu IMC es de %f, esto significa que tienes un ligero sobrepeso", res);
            } else
            {
                printf("Tu IMC es de %f, esto significa que tienes obesidad", res);
            }
        }
    }
return 0;
}