#include<stdio.h>
#include<conio.h> /* Funci�n getch() */
//Prog1. Suma de dos n�meros

int a,b,c;

main(){
	printf("Introducir un valor numerico entero: ");
	scanf("%d",&a);
	
	printf("Introducir otro valor numerico entero: ");
	scanf("%d",&b);
	
	c=(a+b);
	printf("El resultado de la suma es: %d",c);
	getch(); /* Pausar programa */
}
