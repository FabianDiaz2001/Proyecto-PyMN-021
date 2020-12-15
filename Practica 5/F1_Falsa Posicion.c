#include <stdio.h>
#include <math.h>
float
funcion1 (float x)
{
float y = 2 * (x) * cos (2 * x) - pow ((x + 1), 2);
return y;
}
float
falsaposicion (float a, float b, int iter)
{
float xi, xi_anterior = 0.0, errorRP;
int i = 1;
printf ("i \t a \t\t b \t\t xi \t\t Erp\n");
  do
    {
xi = b - ((funcion1 (b) * (a - b)) / (funcion1 (a) - funcion1 (b)));
errorRP = ((xi - xi_anterior) / xi) * 100;
xi_anterior = xi;
printf ("%d \t %.4f \t %.4f \t %.4f \t%.4f \n", i, a, b, xi,
	       fabs (errorRP));
if (funcion1 (a) * funcion1 (xi) < 0)
	{  
b = xi;
}
      else
	{	  
a = xi;	
}      
i++;    
}
  while (funcion1 (a) * funcion1 (xi) != 0 && i <= iter);  
return xi;
}
int
main ()
{  
float a = -3, b = -2, iteraciones = 5; 
float raiz;  
raiz = falsaposicion (a, b, iteraciones);  
printf ("\n La Raiz aproximada es %.4f", raiz);
printf ("\n\n"); 
return 0;
}
