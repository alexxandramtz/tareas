#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int opciones,saldo,retiro,abono;
	
	saldo =3000;
	retiro =0;
	abono =0;
	
	do{
		
		printf("\n**** MENU DE OPCIONES ****\n");
		printf("1. Retiro de Efectivo\n");
		printf("2. Abonar a tu Cuenta\n");
		printf("3. salir del menu\n");
		printf("***************************\n");
		scanf("%d",&opciones);
		
		 switch(opciones){
			case 1: 
				printf("Saldo actual %d \n",saldo);
				printf("Cuanto efectivo deseas retirar\n");
				scanf("%d",&retiro);
				saldo = saldo - retiro;
				printf("Tu saldo actual es de: %d",saldo);
				
				break;
				
		 case 2:
			 printf("Tu saldo actual es de: %d\n",saldo);
			 printf("Cuanto deseas abonar:\n");
			 scanf("%d",&abono);
			 saldo = saldo + abono;
			 printf("Tu saldo actual es de: %d",saldo);
			 
			 break;
			 
		 case 3:
			 printf("***Has decidido salir del menu de opciones, hasta pronto!!***");
			 break;
			 
		 default:
			 printf("\nLa opcion es incorrecta");
			 
			 
			 
			 
			 
			 
		 }
		
		
	} while(opciones !=0);
	
	
	
	return 0;
}

