#include<stdio.h>

int main(){
	char s;
	int dia,mes,anio;
	
		

	do{
		printf("***********************************************************************************\n");
		printf("\t\tPrograma para agendar cita en el Consulado de E.U.\n");		
		printf("Para generar tu cita debes introducir los digitos enteros de la fecha conforme se te solicite \n");		
		printf("Nota:Recuerda que tu cita se agenda para dentro de un anio y medio.\n");
		printf("***********************************************************************************\n\n");
		
		//Validación del dia
		do{
			printf("Introduce el dia actual\n");
			scanf("%d",&dia);
			if(dia<=0 || dia>30){
				printf("Error. Debe ser un dia entre 1 y 30\n");
				printf("Vuelve a intentarlo\n");
			}
		}while(dia<=0 || dia>30);
		
		//Validación del mes
		do{
			printf("Introduce el mes actual\n");
			scanf("%d",&mes);
			if(mes<=0 || mes>12){
				printf("Error. Debe ser un mes entre 1 y 12\n");
				printf("Vuelve a intentarlo\n");
			}
		}while(mes<=0 || mes>12);
		
		//Validación del año
		do{
			printf("Introduce el anio actual \n");
			scanf("%d",&anio);
			if(anio<2022 || anio>2023){
				printf("Error. Debe ser el anio 2022 o 2023\n");
				printf("Vuelve a intentarlo\n");
			}
		}while(anio<2022 || anio>2023);
			
		//Operación para determinar la fecha de la cita
		if(mes>6){
			anio=anio+2;
			mes=mes-6;	
		}
		else{
			anio=anio+1;
			mes=mes+6;
		}
		//Impresión de la cita por pantalla
		printf("Tu cita es el dia: %d/%d/%d\n",dia,mes,anio);
	
			//-----------------------
			fflush(stdin);
			printf("Desea salir del programa? \n");
			printf("Pulse (y) para salir o cualquier tecla para continuar\n\n");
			scanf("%c",&s);
			//Condición para el término del programa
			if(s=='y' || s=='Y'){
				printf("\n");
				printf("Fin del programa\n");
				printf("David Riv\n");
				printf("Matricula: ES20 \n");
				
				break;
			}
	}while(s!='y' || s!='Y');//Condición para el término del programa

}
