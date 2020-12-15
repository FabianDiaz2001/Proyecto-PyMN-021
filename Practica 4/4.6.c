#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int x,y, A[4][4];
    srand(time(NULL));
    printf ("Tu matriz de numeros aleatorios es: \n");
    for(x=0; x<4; x++){
        for (y=0; y<4; y++){
            A[x][y] = rand()%5;
            printf("%d", A[x][y]);
        }
        printf ("\n");
    }
}