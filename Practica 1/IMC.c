#include <stdio.h>
#include <math.h>

int
main ()
{
  char nombre[10];
  int edad;
  float peso, IMC, altura;

  printf ("Como te llamas? ");
  scanf ("%s", nombre);

  printf ("Cuantos años tienes? ");
  scanf ("%d", &edad);

  printf ("Cuanto pesas? (Kilos) ");
  scanf ("%f", &peso);

  printf ("Cuanto mides? (Metros) ");
  scanf ("%f", &altura);

  IMC = peso / pow (altura, 2);
  printf
    ("Hola %s tienes una edad de %d años, pesas %f kilos, mides %f metros y tu indice de masa corporal es de %1.2f",
     nombre, edad, peso, altura, IMC);
}
