#include <stdio.h>

int main (int argc, char *argv[]){

int telefonos[20];
char* agenda[10][4];

telefonos[0] = 12345;
telefonos[1] = 23456;
telefonos[2] = 34567;
telefonos[3] = 45678;

agenda[0][0] = "Alejandro";
agenda[0][1] = "Pineda de Mingo";
agenda[0][2] = "12345";
agenda[0][3] = "correo@correo.com";

agenda[0][0] = "Paco";
agenda[1][1] = "Paquito Paquez";
agenda[2][2] = "23456";
agenda[3][3] = "correo1@correo.com";

agenda[2][0] = "Jose";
agenda[2][1] = "Josito de José";
agenda[2][2] = "34567";
agenda[2][3] = "correo2@correo.com";

agenda[3][0] = "Miguel";
agenda[3][1] = "Miguelito Miguelez";
agenda[3][2] = "45678";
agenda[3][3] = "correo3@correo.com";
printf("El primer telefono es: %i", telefonos[0]);
printf("El correo del segundo registro de la agenda es: %i", agenda[1][3]);
return 0;
}