#include <stdio.h>
#include <conio.h>

int op,sur,norte,ven;
enum division {NORTE,SUR};
enum norte {JUANA,MARIO, JOSE}; 
enum sur {GERARDO,YOLANDA,SAUL};

main()
{
	printf ("\t\tIngrese la division\n");
	printf ("\t\t1. Norte\n");
	printf ("\t\t2. Sur\n");
	scanf("%d",&op);
	
	switch (op-1)
	{
		case NORTE:
			printf ("Escoger vendedor\n");
			printf("\t\t1. Juana\n");
			printf("\t\t2.Mario\n");
			printf("\t\t3. Jose\n");
			scanf ("%d",&norte);
			
			switch (norte-1)
			{
				case JUANA:
					printf ("Lo que gano en la semana fue $750");
					break;
					
				case MARIO:
					printf("Lo que gano en la semana fue $840");
					break;
					
				case JOSE:
					printf ("Lo que gano en la semana fue $972");
					break;
			}
			break;
		
		case SUR:
			printf ("Escoger vendedor\n" );
			printf("\t\t1. Gerardo\n");
			printf("\t\t2.Yolanda\n");
			printf("\t\t3. Saul\n");
			scanf ("%d",&sur);
			
			switch (sur-1)
			{
				case GERARDO:
					printf("Lo que gano en la semana fue $769");
					break;
					
				case YOLANDA:
					printf("Lo que gano en la semana fue $1259");
					break;
					
				case SAUL:
					printf("Lo que gano en la semana fue $943");
					break;
			}
			break;
	}
	getch();
}
