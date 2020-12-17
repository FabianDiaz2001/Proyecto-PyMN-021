#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; 
float b[3] = {27,-61.5,-21.5}; 
float x_inicial1,x_inicial2,x_inicial3,Ea1,Ea2,Ea3,x1old,x2old,x3old; 
float x_iteracion1,x_iteracion2,x_iteracion3; 
int i,j;
int main()
{
for(j=0;j<5;j++){
    if(j==0){ 
        x_iteracion1 = b[0]/A[0][0];
        x_iteracion2 = ((-A[1][0]*x_iteracion1)+b[1])/A[1][1];
        x_iteracion3 = ((-A[2][0]*x_iteracion1)-(A[2][1]*x_iteracion2)+b[2])/A[2][2];
        printf("Metodo de Gaus Seidel\n" );
        printf("x_1 La iteracion 1 es igual a %.4f\n",x_iteracion1);
        printf("x_2 La iteracion 1 es igual a %.4f\n",x_iteracion2);
        printf("x_3 La iteracion 1 es igual a %.4f\n",x_iteracion3);
    }

    else {
        x1old = x_iteracion1;
        x_iteracion1 = ((-A[0][1]*x_iteracion2)-(A[0][2]*x_iteracion3)+b[0])/A[0][0];
        Ea1=fabs((x_iteracion1-x1old)/(x_iteracion1))*100;
        x2old = x_iteracion2;
        x_iteracion2 = ((-A[1][0]*x_iteracion1)-(A[1][2]*x_iteracion3)+b[1])/A[1][1];
        Ea2=fabs((x_iteracion2-x2old)/(x_iteracion2))*100;
        x3old = x_iteracion3;
        x_iteracion3 = ((-A[2][0]*x_iteracion1)-(A[2][1]*x_iteracion2)+b[2])/A[2][2];
        Ea3=fabs((x_iteracion3-x3old)/(x_iteracion3))*100;
        printf("x_1 La iteracion %d es igual a %.4f, Con un error absoluto de %.4f %%\n",j+1,x_iteracion1,Ea1);
        printf("x_2 La iteracion %d es igual a %.4f, Con un error absoluto de %.4f %%\n",j+1,x_iteracion2,Ea2);
        printf("x_3 La iteracion %d es igual a %.4f, Con un error absoluto de %.4f %%\n",j+1,x_iteracion3,Ea3);
        }
    }
}
