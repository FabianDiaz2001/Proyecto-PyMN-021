#include <stdio.h>
int A[3][3]={{0,5,7},{7,8,9},{1,4,6}};
int B[3][1]={{2},{0},{1}};
int R[3][1];
int i,j,k,suma;
int main() {
    for(k=0; k<1; k++){
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                suma= A[i][j]+B[j][k];
            }
            R[i][k]=suma;
            printf ("%d",R[i][k]);
        }
    }
return 0;
}