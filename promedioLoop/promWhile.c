#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
    float calif, sum, mini, maxi, prom;
    int i, cant;
    setlocale(LC_ALL, "");

    printf("\n \nBienvenido, este programa sacará tu promedio, por favor, especifica cuantas calificaciones tienes \n");
    scanf("%d", &cant);

    if(cant >= 1){
        //guchi, we ball
        i = 1;
        mini = 100;
        maxi = 0;
        sum = 0;
        while(i <= cant){
            printf("Escribe la %dª calificación\n", i);
            scanf("%f", &calif);

            if (calif < 0 || isdigit(calif) == 1){
                printf("Esta caracter es inválido, por favor vuelve a intentarlo");
                return 0;
            }
            if (calif > 10){
                printf("La calificación no puede ser mayor a 10, por favor, vuelve a correr el programa e introduce datos validos. ");
                return 0;
            }

            sum = sum + calif;

            if(calif > maxi){ maxi = calif; }
            if(calif < mini){ mini = calif; }

            i++;
        }
        prom = sum / cant;
        printf("El promedio de las calificaciones que introdujiste es %2.2f \n", prom);
        printf("Tu calificación más alta fue %2.2f y la más baja fue de %2.2f\n \n", maxi, mini);
        return 0;
    }
    printf("Parece que pusiste un carácter invalido, por favor, intentalo de nuevo");
    return 0;
}