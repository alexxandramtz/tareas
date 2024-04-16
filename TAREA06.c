#include <stdio.h>

/*Haciendo uso de funciones quiero realizar una suma de dos números enteros*/
/*y sacar el promedio de la suma de los dos números, esos numeros se los*/
/*pediré al usuario, así como también le pediré su primer nombre nada más.*/
/*Al final tengo que mostrar en consola, los números que el usuario ingreso, el*/
/*promedio y su nombre*/


void promediodesuma(int numero1, int numero2, char nombre []){
	int suma,promedio;
	suma = numero1 + numero2;
	promedio = suma /2;
	
	
	return numero1 + numero2;
	


int main(int argc, char *argv[]) {
	
	int n1,n2,suma,promedio;
	char nombre [20];
	
	printf("ingresa tu nombre:\n");
	fgets(nombre,sizeof (nombre),stdin);
	
	
	
	
	printf("Ingresa el primer numero entero:\n");
	scanf("%d",&n1);
	
	printf("Ingresa el segundo numero entero:\n");
	scanf("%d",&n2);
/*	suma = n1+n2;*/
/*	promedio=suma /2;*/
	//promedioresultado =  (n1,n2)/2;
	promediodesuma(n1,n2)/2;
	printf("El resultado de la suma es: %d\n",suma);
	printf("El promedio de la suma es: %d",promedio);
	
	return 0;
}

