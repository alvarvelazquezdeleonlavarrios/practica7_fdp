#include<stdio.h>
#include<conio.h> /* Función getch() */
//Prog1. Suma de dos números

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
