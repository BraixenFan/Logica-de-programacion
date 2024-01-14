#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cant, sobprom = 0;
    float masa, total, prom, max;

    setlocale(LC_ALL, "");

    printf("\n \nBienvenido, este programa calculará el peso promedio de tus pacientes. Por favor, ingresa la cantidad de pacientes que ingresarás en el sistema \n");
    scanf("%i", &cant);

    float datos[cant];

    for (int i = 1; i <= cant; i++)
    {
        printf("Ingresa el peso del %iº paciente: ", i);
        scanf("%f", &masa);

        datos[i-1] = masa;
        total += masa;
    }

    prom = total / cant;
    printf("El peso promedio de tus pacientes es %3.2f \n", prom); 

    for (int i = 0; i < cant; i++) { if (datos[i] > prom) { sobprom++; }; if( datos[i] > max ) { max = datos[i]; }  }
    printf("De los cuales, %i son mayores al promedio ", sobprom);
    printf("siendo %3.2f el peso más grande entre tus pacientes\n\n", max);

}