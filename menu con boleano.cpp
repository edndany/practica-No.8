#include <stdio.h>


int op;
enum diasSemana {LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO};

main()
{
	printf ("Ingrese el dia de la semana\n");
	printf("\t\t1. Lunes\n");
	printf("\t\t2. Martes\n");
	printf("\t\t3. Miercoles\n");
	printf("\t\t4. Jueves\n");
	printf("\t\t5. Viernes\n");
	printf("\t\t6. Sabado\n");
	printf("\t\t7. Domingo\n");
	scanf ("%d",&op);
	
	switch(op-1)
	{
		case LUNES:
		case MARTES:
			printf("Inicio de semana\n");
			break;
		case MIERCOLES:
			printf("Mitad de semana\n");
			break;
		case JUEVES:
			printf("¡Casi inicia el fin de seman!\n");
			break;
		case VIERNES:
		case SABADO:
			printf("Fin de seman\n");
			break;
		case DOMINGO:
			printf("Dia de descanso\n");
			break;
			
	}
	
	return 0;
}
