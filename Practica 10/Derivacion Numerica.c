#include <stdio.h>
#include<math.h>
float DerivAdelante(float h, float(xi));
float DerivAtras(float h, float(xi));
float DerivAcentrada(float h, float(xi));
float xi,h,o;
int main()
{
 printf("Bienvenido, ¿A que valor desea imprimir los resultados? \n h=0.5 \n h=0.2 \n h=0.1 \n h=0.01 \n");
 scanf("%f",&o);
 
    xi=0.6; h=o;
    printf("Calculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi = 0.6\n");
    printf("El valor para h=%.2f es: %.4f\n",h,DerivAdelante(xi,h));
     printf("El valor para h=%.2f es: %.4f\n",h,DerivAtras(xi,h));
     printf("El valor para h=%.2f es: %.4f\n ",h,DerivAcentrada(xi,h));
     
}
float DerivAdelante(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2;
    fxi = 1-exp(-xi/0.2); 
    fxip1 = 1-exp(-(xi+h)/0.2); 
    fxip2 = 1-exp(-(xi+(2*h))/0.2); 
    dfxi = (-fxip2+4*fxip1-3*fxi)/(2*h);
    return dfxi; 
}
float DerivAtras(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2;
    fxi = 1-exp(-xi/0.2); 
    fxip1 = 1-exp(-(xi-h)/0.2);
    fxip2 = 1-exp(-(xi-h)/0.2);
    dfxi = (3*fxi-4*fxip1-fxip2)/(2*h);
    return dfxi; 
}
float DerivAcentrada(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2;
    
     fxip1 = 1-exp(-(xi+h)/0.2);
   fxip2 = 1-exp(-(xi-h)/0.2); 
    dfxi =(fxip1-fxip2)/(2*h);
    return dfxi; 
}