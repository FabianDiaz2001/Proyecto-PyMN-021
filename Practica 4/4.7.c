#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int x,y, A[4][4];
    int f,c, B[4][4], suma, R[4][2],j;
    srand(time(NULL));
    printf("Tu matriz de numeros aleatorios es: \n");
    for(x=0; x<4; x++){
        for(y=0; y<4; y++){
            A[x][y]= rand()%5;
            printf("%d", A[x][y]);
        }
        printf ("\n");
    }
    printf ("Tu 2da matriz de numeros aleatorios es: \n");
    for(f=0; f<4; f++){
        for (c=0; c<4; c++){
            A[f][c]= rand()&5;
            printf("%d", A[f][c]);
        }
        printf ("\n");
    }
    for(j=0; j<4; j++){
        suma=A[x][y]+B[f][c];
        R[x][j]= suma;
    }
    printf("La suma de tus matrices es: %d\n", R[x][y]);
}
