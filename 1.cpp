#include <stdio.h>
#include <stdlib.h>

// Crear funcion//
int funcionsuma (int Num1, int Num2 ,int suma){

printf ("Num1: \n");   scanf ("%d",&Num1);
 
    printf ("Num2: \n");
    scanf ("%d",&Num2); suma= Num1 + Num2 ;

   
    printf ("Resultado : %d\n",suma);
    return Num1+Num2;
}

int main () {
	int Num1, Num2 , suma;

 funcionsuma (Num1 , Num2 , suma );

system("pause");
return 0;


}
