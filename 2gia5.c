/*

 */

#include <stdio.h>


void 
calculo_telefonico (){
	int min;
	int new;
	int total;
	int total2;
	char tecla='s';
	
	while(tecla=='s'){
		printf("Indique la cantidad de minutos que hablo \n");
		printf("para poder calcular cuanto dinero debe \n");
		scanf("%d", &min);
		
		if(min <=10){
		total=(min*100);}
	
	
		if(min >10){
		new=(min-10);
		total2=(new*50);
		total=(total2 + 1000);
		}
	
	
		printf("lo que debes cancelar por : %d, minutos hablados es de : %d \n",min,total);
		printf("deseas calcular otra tarifa telefonica? (s/n) \n");
		scanf(" %c",&tecla);
		if (tecla== 'n' || tecla=='N'){
			break;
		}
	}
}

int main (){
	printf("bienvenido al programa telefonico que calcula tu duda \n");
	calculo_telefonico ();
	return 0;
}
