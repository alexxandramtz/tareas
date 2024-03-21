#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int tabla;
	int i;
	
	printf("Digite el numero de tabla que desea: \n ");
	scanf("%i",&tabla);
	
	for(i=1; i<=10;i++){
		printf("\n %i * %i = %i" , tabla, i , tabla * i);
			
		
	}
	
	
	
	
	return 0;
}

