#include <stdio.h>
#include <math.h>

int main () {
  float radio;
  float volumen;
  float pi = 3.1416;
  printf("Dame el radio de la esfera, en metros ");
  
  scanf("%1f",&radio);

   volumen = 1.333333333*pi*pow(radio, 3);
 printf ("El volumen de la esfera es %1f volumen cubicos", volumen);
}