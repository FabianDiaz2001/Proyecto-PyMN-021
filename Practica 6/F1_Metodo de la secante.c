#include <stdio.h>
#include <math.h>
float f(float x)
{
   float y;
    y= (8*sin(x)*exp(-x))-1;
   return y;
}
float secante(float x0,float x1, int iter)
{
   int i=1;
   float xi, ximas1,ximenos1,erp;
   float fprima;
   printf("i \t Xi \t\t Xi-1 \t\t Xi+1 \t\t ~=f'(x) \t Err\n\n");
   xi=x1;
   ximenos1=x0;
   do
   {
      ximas1= xi - (f(xi)*(ximenos1-xi))/(f(ximenos1)-f(xi));
      erp= fabs((ximas1-xi)/ximas1)*100;
      fprima= (f(ximenos1)-f(xi))/(ximenos1-xi);
      printf("%i \t %.8f \t %.8f \t %.8f \t%.8f \t %.8f\n",i,xi,ximenos1,ximas1,fprima,erp);
      ximenos1=xi;
      xi=ximas1;
      i++;
   }while(i<=iter);
   return ximas1;
}
int main ()
{
	float x0=0.3, x1=0.5,raiz;
    int iter=5;
    raiz=secante(x0,x1,iter);
	return 0;
}
