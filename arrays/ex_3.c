#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE1 100
#define SIZE2 200

int main(){
    int i,j,N,M;

    do{
        printf("Insert size1 of array from 10..100: ");
        scanf("%d", &M);
    }while(M<1 || M>100);
    do{
        printf("Insert size2 of array from 20..100: ");
        scanf("%d", &N);
    }while(N<2 || N>100);

    int myArray[M][N];
    srand(time(NULL));
    for (i=0; i<M;i++){
        for (j=0; j<N;j++)
            myArray[i][j] = rand()%10;
    }

    for (i=0;i<M;i++){
        for (j=0;j<N;j++)
            printf("%d\t", myArray[i][j]);
    }
}