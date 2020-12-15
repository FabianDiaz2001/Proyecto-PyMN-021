#include <stdio.h>
int main ()
{
int i, a[10];
for(i=0; i<10; i++){
    printf ("ingresar el valor %d: ", i+1);
    scanf ("%d", &a[i]);
}
printf("El arreglo es \n");
for(i=0; i<10; i++){
    printf("%d", a[i]);
}
int b[10];
for(i=0; i<10; i++){
    printf ("\n Ingresa el valor del segundo arregldo %d: ", i+1);
    scanf ("%d", &b[i]);
}
printf ("Tu arreglo es");
for(i=0; i<10; i++){
    printf ("%d", b[i]);
}
}