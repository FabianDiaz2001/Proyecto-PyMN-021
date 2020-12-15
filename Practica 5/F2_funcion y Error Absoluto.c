#include <stdio.h>
#include <math.h>
float funcion2(float x_entrada);
float ErrorRelativo(float ValorAnalitico,float ValorNumerico);
float ValorNumerico, ValorAnalitico, x_ent;
int main()
{
    x_ent= 5;
    ValorAnalitico= 22.6094;
    ValorNumerico= 22.6666; // Este numero es solo para saber si funciona el error relativo
    printf("para la funcion2 f(5) es igual a %2.4f\n", funcion2(x_ent));
    printf ("El Error relativo porcetual = %2.4f %%\n", ErrorRelativo(ValorAnalitico, ValorNumerico));
}
float funcion2(float x_entrada){
    // In|x| + x^2 − 4
    float fx;
    fx= (log(x_entrada)) + pow(x_entrada,2) -4;
    return fx;
}
float ErrorRelativo(float ValorAnalitico, float ValorNumerico){
    //epsilon= abs (ValorAnalitico-Valornumerico/ValorNumerico)*100
    float epsilon;
    epsilon= fabs((ValorAnalitico - ValorNumerico)/ValorNumerico)*100;
    return epsilon;
}
