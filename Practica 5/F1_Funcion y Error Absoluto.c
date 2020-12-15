#include <stdio.h>
#include <math.h>

float funcion1(float x_entrada);
float ErrorRelativo(float ValorAnalitico,float ValorNumerico);
float ValorNumerico, ValorAnalitico, x_ent ;
int main()
{
    x_ent=3;
    ValorAnalitico= -10.2389;
    ValorNumerico= -10.2390;
    printf ("para la funcioon1 f(3) es igual a %2.4f\n", funcion1(x_ent));
    printf ("El Error relativo porcetual = %2.4f %%\n", ErrorRelativo(ValorAnalitico, ValorNumerico));
}
float funcion1(float x_entrada){
    // 2x*cos(2x)-(x+1)^2x
    float fx;
    fx=(2*(x_entrada)*cos(2*x_entrada))-pow((x_entrada+1),2);
    return fx;
}
float ErrorRelativo(float ValorAnalitico, float ValorNumerico){
    //epsilon= abs (ValorAnalitico-Valornumerico/ValorNumerico)*100
    float epsilon;
    epsilon= fabs((ValorAnalitico - ValorNumerico)/ValorNumerico)*100;
    return epsilon;
}
