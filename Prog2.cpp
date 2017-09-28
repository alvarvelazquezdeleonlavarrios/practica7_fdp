#include<stdio.h>
#include<math.h>
#include<conio.h> /* Función getch() */
//Prog2. Área de un círculo

const float pi = 3.1416;
float r,b,a;

main(){
	printf("Introducir valor del radio: ");
	scanf("%f",&r);
	
	b=pow(r,2);
	a=(pi*b);
	
	printf("El area del circulo es: %f",a);
	getch(); /* Pausar programa */
}
