#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./includes/mylib.h"

#define SIZE 100

void quick_sort(int *pin, int start, int finish);
int partition(int *pin, int start, int finish);
void swap(int *a, int *b);

int main(){
    int pin[SIZE];
    int n=15;
    srand(time(NULL));
    int x = rand()%50;

    init_array(pin, n);
    print_array(pin, n);
    quick_sort(pin, 0, n-1);
    print_array(pin,n);
}

void quick_sort(int *pin, int start, int finish){
    //pin=[9,8,4,11|,2,20,1,6,|19]
    // i=3 j=8
    // [9,8,4,6,2,|20,1|,11,19]
    // i=5 j=6
    // [9,8,4,6,2,1,20,11,19]
    // i=6 > j=5
    // swap(pin[start],pin[j])
    // [1,8,4,6,2,9,20,11,19]
    // return j=5

    // [1,8,4,6,2]           [20,11,19]
    // pin[1,8,4,6,2]        pin[20,11,19]
    // j=0                   i=2 j=2
    // pos = 0              [19,11,20]
    //                       return j=2
    //[1][8,4,6,2]              [20,11]
    // j=3  [2,4,6,8]

    int pos;
    if(start<finish){
        pos = partition(pin,start,finish);
        quick_sort(pin, start, pos-1);
        quick_sort(pin, pos+1,finish);
    }
}

int partition(int *pin, int start, int finish){
    // pin=[9,8,4,11|,2,20,1,6,|19]
    int pivot = pin[start];
    int i,j;
    i=start+1;
    j=finish;

    while(1){
        while(pin[i]<=pivot && i<=finish){
            i++;
        }
        while(pin[j]>pivot && j>start){
            j--;
        }
        if(i<j){
            swap(&pin[i],&pin[j]);
        }else{
            swap(&pin[start],&pin[j]);
            return j;
        }
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}