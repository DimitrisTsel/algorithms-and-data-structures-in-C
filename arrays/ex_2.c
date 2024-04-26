#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define M 5
#define N 8

int main(){
    int i,j;

    int myArray [M][N];
    srand(time(NULL));
    for (i=0; i<M;i++){
        for (j=0;j<8;j++){
            myArray[i][j] = rand()%200;
        }
    }
    printf("[");
    for (i=0;i<M-1;i++){
        for (j=0;j<N-1;j++)
            printf("%d\t,", myArray[i][j]);
    }
    printf("%d]\n", myArray[M-1][N-1]);
}