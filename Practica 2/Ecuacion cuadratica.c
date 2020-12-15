#include<stdio.h>
#include<math.h>
int main()
{
float x1, x2;
int   a , b, c;
    printf("Ingrese el valor de a: ");
    scanf("%d",&a);
    printf("Ingrese el valor de b: ");
    scanf("%d",&b);
    printf("Ingrese el valor de c: ");
    scanf("%d",&c);
if(a!=0)
	{
if (b*b-4*a*c>=0)
	{
    x1= (-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);

	
	printf("valor de X1 %.2f", x1);
	printf("valor de X2 %.2f", x2);
   	}
	else
    printf("Error las soluciones no son reales");
}
    return 0;
}