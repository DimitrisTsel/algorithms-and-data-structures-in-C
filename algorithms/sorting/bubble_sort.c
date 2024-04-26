#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "includes/mylib.h"

#define SIZE 100

void bubble_sort(int *pin, int n);
void swap(int *a, int *b);

int main(){
    int pin[SIZE];
    int n=40;
    srand(time(NULL));
    int x = rand()%50;

    init_array(pin, n);
    print_array(pin, n);
    bubble_sort(pin,n);
    print_array(pin,n);
}

/*
A=[2,4,1,7,9,5]
i=0,j=5
*/
void bubble_sort(int *pin, int n){
    int i,j;
    for (i=0;i<n-1;i++){
        for(j=n-1;j>=i+1;j--){
            if(pin[j]<pin[j-1])
                swap(&pin[j],&pin[j-1]);
        }
    }
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}