#include <stdio.h>


int main (int argc, char *argv[]){

    for(int dia =1; dia < 31; dia++){
        printf("Hoy es el día %i del menu \n ", dia);
    }

    int dia;
    
    while(dia < 31){
        printf("Hoy es el día %i del menu \n ", dia);
        dia++;
    }

    int edad = 45;

    do {
        printf("Tu edad es inferior a 60 años \n");
        edad++;
    } while(edad < 60);

    printf("¡Eres mayor! \n");

edad = 45;
if (edad < 30){
printf("Todavía eres joven \n");
}else{

    printf("Ya no eres joven \n");
}

int diadelasemana = 1;

switch (diadelasemana){
    case 1:
        printf("Hoy es lunes");
    break;
    case 2:
        printf("Hoy es martes");
    break;
    case 3:
        printf("Hoy es miercoles");
    break;
    case 4:
        printf("Hoy es jueves");
    break;
    case 5:
        printf("Hoy es viernes");
    break;
    case 6:
        printf("Hoy es sabado");
    break;
    case 7:
        printf("Hoy es domingo");
    break;
}

    return 0;
}

