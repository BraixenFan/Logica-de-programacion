#include <stdio.h>
int main(){
    int cal1, cal2, cal3;
    float res;
    printf("Bienvenido, este programa sacará tu promedio final y te dirá si aprobaste ó reprobaste el semestre \n");
    printf("A continuación, introduce tus tres calificaciones parciales, usa números enteros en dígitos y separa cada calificación con un espacio.\n \n");
    scanf("%d %d %d", &cal1, &cal2, &cal3);
    res = (cal1 + cal2 + cal3) / 3.0;
    printf("Tu calificación es %2.1f \n", res); 
    if (res >= 7.0){
        printf("Felicidades! Aprobaste el semestre! \n");
    }else{
        printf("Lo sentimos, esta calificación es reprobatoria. \n");
    }
return 0;
}