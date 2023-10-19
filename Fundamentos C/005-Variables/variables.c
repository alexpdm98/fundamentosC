#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]){

float altura = 1.78;
int edad = 45;
char letra = 'A';
char nombre[] = "Alejandro ";
char apellidos[] = "Pineda de Mingo";

printf("Mi edad es %i años \n", edad);
printf("Mi altura es %f metros \n", altura);
printf("Mi inicial es %c \n", letra);
printf("Mi nombre es %s \n", nombre);
edad++;
printf("Mi edad es %i años \n", edad);
edad++;
printf("Mi edad es %i años \n", edad);
edad++;
printf("Mi edad es %i años \n", edad);
edad+=2;
printf("Mi edad es %i años \n", edad);
edad-=2;
printf("Mi edad es %i años \n", edad);
edad*=2;
printf("Mi edad es %i años \n", edad);
edad/=2;
printf("Mi edad es %i años \n", edad);
strcat(nombre,apellidos);
printf("Mi nombre completo es %s \n",(nombre));

return 0;
}