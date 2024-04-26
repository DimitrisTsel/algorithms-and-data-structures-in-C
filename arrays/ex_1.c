#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(){
    int pinakas[SIZE];
    int i,N;
    /* dimension of array*/
    do{
        printf("Give the size of array from 10..100: ");
        scanf("%d", &N);
    }while(N<10 || N>100);

    srand(time(NULL));
    for (i=0; i<N; i++)
        pinakas[i]=rand()%100;
    
    printf("[");
    for (i=0;i<N-1;i++)
        printf("%d,", pinakas[i]);
    
    printf("%d]\n", pinakas[N-1]);

}