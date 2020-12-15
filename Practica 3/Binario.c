#include <stdio.h>
int main()
{
    int Binario[100];
    int i=0, j=0;
    int numero;
    printf ("Dame el numero: ");
    scanf ("%d",&numero);
    
    for (i=100; i>0; i--) {
        Binario[i]=numero%2;
        numero=numero/2;
    }
    for (i=1; i<=100; i++) {
        if (Binario [i]==1){
            for (j=i; j<=100; j++ ){
                printf ("%d", Binario[j]);
            }
            break;
        }
    }  
    return 0;
}