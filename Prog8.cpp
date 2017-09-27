#include<stdio.h>
#include<conio.h> /* Función getch() */
//Prog8.Promedio de 3 números

int a=1;
float cont=0,num,p=0;

main(){
	
	while(a<4){
		printf("Introducir valor %d: ",a);
		scanf("%f",&num);
		cont=cont+num;
		a++;
	}
	p=cont/3;
	printf("\nEl promedio es: %f",p);
	getch();
}
