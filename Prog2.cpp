#include<stdio.h>
#include<math.h>
#include<conio.h> /* Función getch() */
#define pi 3.1416
//Prog2. Área de un círculo

float r,b,a;

main(){
	printf("Introducir valor del radio: ");
	scanf("%f",&r);
	
	b=pow(r,2);
	a=(pi*b);
	
	printf("El area del circulo es: %f",a);
	getch(); /* Pausar programa */
}
