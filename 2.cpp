#include<stdio.h>
#include<math.h>
void media (int,int,float,float);
int main (void){
	int i=0,n=0; 
	float suma = 0 ,ax= 0;
	
	printf("Introduzca el total de datos :");	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Ingrese el dato %d :\n",(i+1));scanf("%f",&ax);
	suma+=ax;
	}
	printf("El promedio  es: %g\n",(suma/n));
	
	return 0;
}
void media (int i,int n,float suma,float ax){
		
	printf("Introduzca el total de datos :");	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Ingrese el dato %d :\n",(i+1));scanf("%f",&ax);
	suma+=ax;
	}
	printf("El promedio es: %g\n",(suma/n));
}
