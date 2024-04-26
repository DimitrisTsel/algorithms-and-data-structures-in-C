#include <stdlib.h>
#include <stdio.h>

void init_array(int *pin, int n){
    for (int i=0; i< n; i++)
        pin[i]=rand()%50;
}

void print_array(int *pin, int n){
    printf("[");
    for(int i=0; i<n-1;i++)
        printf("%d,",pin[i]);
    printf("%d]\n",pin[n-1]);
}