#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char **argv) {
    char *cadena;
    int i,largo,temp;

    // ¿Cuanto ocupa?
    for (i=0;i<argc;i++) {
        largo+=strlen(argv[i]);
    }

    // Realizo la reserva de memoria para almacenar, +1 fin de cadena
    cadena=(char *)malloc(sizeof(char)*(largo+1));
    strcpy (cadena,""); // Quito los espacios en blanco
    if (cadena == NULL) {
        printf ("Se produjo un error al reservar la memoria\n");
        return 1;
    }

    // Almacenamos argv en cadena
    for (i=0;i<argc;i++) {
        cadena=strcat(cadena,argv[i]);
    }

    printf ("\nLa cadena original es: %s\n",cadena);
    // Por último, damos la vuelta a la cadena resultante.
    for (i=0;i<strlen(cadena)/2;i++) {
        temp = cadena [i];
        cadena[i]=cadena[strlen(cadena)-1-i];
        cadena[strlen(cadena)-1-i]=temp;
    }

    printf ("\n-------\n");
    printf ("La cadena alterada es: %s\n",cadena);
system("pause");
    return 0;
}
