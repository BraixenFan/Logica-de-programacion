#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> 

int main(){
    int victory = 0, attempt = 0, num, try;
    time_t t1;

    setlocale(LC_ALL, "");
    srand ( (unsigned) time (&t1)); 

    printf("\n\nBienvenido! Vamos a jugar! ");
    while (victory == 0 && attempt < 6)
    {
        if (attempt == 0){
            num = rand() % 100;
            printf("Adivina el número en el que estoy pensando, va del 0 al 100\n");
        }
        
        printf("Escribe el número en el que creas que estoy pensando\n");
        scanf("%d", &try);

        if(try > num){
            printf("Incorecto! El número en el que estoy pensando es mas pequeño que ese\n");
        }
        if (try < num){
            printf("Incorrecto! El número en el que estoy pensando es más grande que ese \n");
        }
        if(try == num){
            printf("Dios mio! Ese es exactamente el número en el que estoy pensando!\n");
            victory = 1;
        }
        attempt++;
    }

    if (victory == 1){
        printf("Felicidades! Ganaste!\n");
    }
    if (victory == 0){
        printf("Uy! Se te acabaron los intentos, el número en el que estaba pensando era %d, suerte para la próxima!\n", num);
    }
}