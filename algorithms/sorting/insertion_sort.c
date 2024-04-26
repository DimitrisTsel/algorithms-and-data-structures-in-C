#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "includes/mylib.h"

#define SIZE 100

void insertion_sort(int *pin, int n);
void swap(int *a, int *b);

int main(){
    int pin[SIZE];
    int n=30;
    srand(time(NULL));
    int x = rand()%30;

    init_array(pin, n);
    print_array(pin, n);
    insertion_sort(pin,n);
    print_array(pin,n);
}

/*
---------------
insertion sort
---------------
E.g. A = [2,5,3,7,9,1]
We suppose that the first element is sorted
and the iteration i starts from i=1.
i=1
j=1,A[1]=5
if A[1]<A[0] then,
    swap(A[0],A[1])
-----
i=2
j=2 if A[2]<A[1] then swap(A[2],A[1])
Now A=[2,3,5,7,9,1]
j=1 if A[1]<A[0] then swap(A[1],A[0])
-----
i=3
j=3 if A[3]<A[2] then swap(A[3],A[2])
j=2,j=1
.
.
.
Before final iter A=[2,3,7,5,9,1]
i=5
j=5 if A[5]<A[4] then swap(A[5],A[4])
....
After final iter A[5] will shift all previous numbers to the right
and will be located to the first position
A=[1,2,3,5,7,9,1]

*IMPROVEMENT*
if pin[j]>=pin[j-1] then
    break;
By this way we avoid unnecessary if checks!
*/
void insertion_sort(int *pin, int n){
    int i,j;
    for (i=1;i<n;i++){
        for (j=i;j>=1;j--){
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