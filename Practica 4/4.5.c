#include <stdio.h>
int main () {
    int x,y, a[3][3];
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("Ingresa el valor %d:", x, y);
            scanf ("%d", &a[x][y]);
        }
    }
    printf ("Tu matriz es: \n");
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("%d", a[x][y]);
        }
        printf("\n");
    }
}