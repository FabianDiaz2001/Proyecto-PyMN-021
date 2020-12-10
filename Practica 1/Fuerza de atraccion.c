#include  <stdio.h>
 int main () {
     float masa;
     float fuerza;
     float gravedad = 9.8;
    printf ("dame tu peso ");
    scanf ("%1f",&masa);
    
    fuerza = masa * gravedad;
    
    printf ("Tu fuerz de atraccion es %1.2f",fuerza);
 }