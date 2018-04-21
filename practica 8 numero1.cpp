#include <stdio.h>
#include <conio.h>


int x,w;

 main()
 {

      printf("Dame el valor de x diferente de 2, para realizar una operacion.", x);
   scanf("%d", & x);
      if(x>2)
        {
w=((x*x)-(4*x)+20);
printf("El resultado de la operacion ((x^2)-4x+20) es: %d",w);
     }
      if(x<2) 
{
w=((3*(x*x))+(8*x)+2);
printf("El resultado de la operacion ((3x^2)+8x+2) es: %d",w);
    }
  

getch(); 

 } 

