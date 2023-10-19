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

    return 0;
}