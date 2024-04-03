#include <stdio.h>

/*Haciendo uso de funciones quiero pedirle al usuario un numero y una vez*/
/*introducido el numero quiero que ese numero sea el fin de mi ciclo, es decir*/
/*si el usuario ingresa un 4 mi ciclo va a ir del 1 al 4, pero si el usuario pone un*/
/*10, voy a recorrer un ciclo del 1 al 10, una vez teniendo sumare los números*/
/*que son impares.*/
/*Al finalizar, en consola tengo que mostrar los números del ciclo que recorrí así*/
/*como la suma de los números impares.*/

 void sumaimpares (int num){
int i,sumaimpares;
    i=1;
    sumaimpares=0;


do{
	
	if(i % 2 ==1){
		printf("\nnumero impar %d",i);
		sumaimpares=sumaimpares+i;
	}
	else if (i % 1 ==0){
		
	}
	i++;
} while(i<=num);
printf("\nla suma de los impares es: %d",sumaimpares);

 }

int main(int argc, char *argv[]) {

	int num;
	
	printf("ingresa un numero: ");
	scanf("%d",&num);

	sumaimpares (num);
	
	
	return 0;
}	

	


