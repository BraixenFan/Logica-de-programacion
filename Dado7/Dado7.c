#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> 

int main(){
    int money, rep, inp, dad1, dad2, sum, luck, cont;
    time_t t1;

    setlocale(LC_ALL, "");
    srand ( (unsigned) time (&t1));

    money = 10;
    rep = 0;

    printf("\n\nBienvenido al casino! Tienes 10 pesos, vamos a jugar al Dado 7.");

    do{
        if (rep == 0)
        {
            printf("\nPon tu apuesta: Presiona 1 para apostar que el resultado del lanzamiento de dos dados será menor a 7, presiona 2 para decir que será 7 y presiona 3 para decir que será mayor a 7\n");
        } else {
            printf("\nVamos de nuevo! Presiona 1 si crees que la suma será menor, 2 si será siete y 3 si será mayor\n");
        }
        
        scanf("%i", &inp);

        money--;

        dad1 = (rand() % 5) + 1;
        dad2 = (rand() % 5) + 1;

        sum = dad1 + dad2;

        printf("El primer dado salío en %d y el segundo dado tiene %d\n", dad1, dad2);

        if (sum <= 6){
            luck = 1;}
        else if(sum == 7){
            luck = 2;}
        else if(sum >= 8){
            luck = 3;
        }

        printf("La suma de los dados es %d, eso quiere decir que ", sum);

        if (luck == inp)
        {
            printf("Ganaste!\n");
            money = money + 2;
            if (luck == 2){ money = money + 4; }        
        } else {
            printf("Perdiste...\n");
        }

        cont = 1;
        rep++;

        if (money > 0)
        {
            printf("Ahora tienes %i pesos, presiona 1 para continuar o presiona cualquier otro botón para salir\n", money);
            scanf("%i", &inp);

            if (inp == 1){ cont = 0; }   
        } else {
            printf("\n\nAy! Te has quedado sin dinero! Tendrás que irte con los bolsillos vacíos, más suerte para la próxima!\n\n");
            return 0;
        }

    } while (cont==0);

    printf("\nSaliste del Casino con $%i en el bolsillo, vuelve pronto!\n\n", money);
    return 0;
}