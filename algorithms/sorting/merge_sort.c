#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "includes/mylib.h"

#define SIZE 100

void merge_sort(int *pin, int start, int finish);
void merge(int *pin, int start, int finish);
void swap(int *a, int *b);

int main(){
    int pin[SIZE];
    int n=35;
    srand(time(NULL));
    int x = rand()%50;

    init_array(pin, n);
    print_array(pin, n);
    merge_sort(pin,0,n-1);
    print_array(pin, n);

}

void merge_sort(int *pin, int start, int finish){
    /* [1,30,38,0] */
    /*
        [1,30][38,0]
    ->  [1,30][0,38]

        C[0,1,30,38]
    */
    int middle;
    if(start==finish)
        return;
    else if(start==finish-1){
        if(pin[start]>pin[finish]){
            swap(&pin[start],&pin[finish]);
        }
    }else{
        middle = (start+finish)/2;
        merge_sort(pin, start,middle);
        merge_sort(pin, middle+1, finish);
        merge(pin, start, finish);
    }
}
void merge(int *pin, int start, int finish){
    int C[SIZE];
    int i,j,k;
    int middle, n,m;

    middle = (start+finish)/2;
    i=start;
    n=middle;
    j=middle+1;
    m=finish;
    k=0;

    /*  [i,....,n] [j,.....,m]
        pin=[2,3,4|,|1,7,9]
        C[1,2,4,||7,9]
    */
    while(i<=n && j<=m){
        if(pin[i]<=pin[j]){
            C[k]=pin[i];
            i++;
        }else if(pin[j]<=pin[i]){
            C[k]=pin[j];
            j++;
        }
        k++;
    }
    while(i<=n){
        C[k]=pin[i];
        i++;
        k++;
    }
    while(j<=m){
        C[k]=pin[j];
        j++;
        k++;
    }
    // Copy the sorted elements back to the original array

    for (i=start,k=0;i<=finish;i++,k++){
        pin[i]=C[k];
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

