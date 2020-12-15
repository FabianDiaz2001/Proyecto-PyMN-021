#include <stdio.h>
#include <math.h>
float
funcion2 (float x)
{  
float y;  
y = (log (x)) + pow (x, 2) - 4;  
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
xi = b - ((funcion2 (b) * (a - b)) / (funcion2 (a) - funcion2 (b)));      
errorRP = ((xi - xi_anterior) / xi) * 100;      
xi_anterior = xi;      
printf ("%d \t %.6f \t %.6f \t %.6f \t%.6f \n", i, a, b, xi,
	       fabs (errorRP));       
if (funcion2 (a) * funcion2 (xi) < 0)
	{	  
b = xi;	
}
      else
	{	  
a = xi;	
}      
i++;    
}
  while (funcion2 (a) * funcion2 (xi) != 0 && i <= iter);  
return xi;
} 
int
main ()
{  
float a = 1, b = 2, iteraciones = 5;  
float raiz;  
raiz = falsaposicion (a, b, iteraciones); 
printf ("\n Raiz aproximada es %.6f", raiz);
printf ("\n\n");
return 0;

}
