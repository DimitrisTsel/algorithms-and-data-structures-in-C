#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "includes/mylib.h"

#define SIZE 100

void selection_sort(int *pin, int n);
void swap(int *a, int *b);

int main(){
    int pin[SIZE];
    int n=30;
    srand(time(NULL));
    int x = rand()%30;

    init_array(pin, n);
    print_array(pin, n);
    selection_sort(pin,n);
    print_array(pin,n);
}

/*
---------------
selection sort
---------------
E.g. A = [2,5,3,7,9,1]
i=0, A[0]=2
j=1, A[1]=5
if A[1]<A[0] then,
    swap(A[0],A[1])
....
i=0, A[0]=2
j=5, A[5]=1
if A[5]<A[0] then,
    swap(A[0],A[5])

Now the array A=[1,5,3,7,9,2]
*/

void selection_sort(int *pin, int n){
    int pos,temp,i,j;
    for (i=0;i<n;i++){
        pos = i;
        for (j=i+1;j<n;j++){
            if(pin[j]<pin[pos])
                pos=j;
        }
        swap(&pin[i], &pin[pos]);
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}