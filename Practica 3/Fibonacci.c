#include<stdio.h>
 int main() {
  double f1, f2, f3, numero, i;
     double divs;
  f1= 1;
  f2= 1;
  f3= 2;
   printf("Ingresa un numero:\n");
         scanf("%lf",&numero);
         for( i=0; i<numero; i++){
     f3 = f1+f2;
     printf("%lf\n",f3);
     f1= f2;
     f2= f3;
         }
    divs= (f3/f1);
    printf("La aproximacionn es: %.4lf", divs);
         return 0;
     }