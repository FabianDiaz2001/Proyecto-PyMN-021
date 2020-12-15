#include <stdio.h>
#include <math.h>
#define RAIZ(x) (2*(x)*cos(2*x))-pow((x+1),2)
int main() {
float a, b, xi, xa, Ea;
int iteraciones;
printf("Dame el valor de b: ");
scanf("%f", &b);
printf("Dame el valor de a: ");
scanf("%f", &a);
 iteraciones = 0;
xa = 0.0;
Ea = 0;
printf("%12s %10s %10s %10s %10s\n","Iteraciones", "b", "a", "Xi","Error Aproximado");
 do{
iteraciones++;
xi = (b + a) / 2;
if(iteraciones >= 0) {
Ea = ((xi - xa) / xi) * 100; // Error aproximado
}
Ea = fabs(Ea); // valor absoluto del número
printf("%12d %10f %10f %10f %10f\n",iteraciones, b, a, xi, fabs(Ea));
xa = xi;
if(RAIZ(xi) > 0) {
b = xi;
} else{
a = xi;
}
 } while(Ea > 0.5 || (Ea == 0.0 && iteraciones == 1));
 printf("\nLa raiz es de f(x) = x + 2; es: %f\n", xi);
 return 0;
}
