#include <stdio.h>

int main (int argc, char *argv[]){
    FILE *archivo;
    char cadena[100];
    archivo = fopen("agenda.txt","r");
    fprintf(archivo,"Esto es un texto de prueba. ");
    fclose(archivo);
 return 0;
}