#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void init_array(int *pin, int n);
void sum_function(int *pin, int n);
void print_array(int *pin, int n);

int main(){
    int pin[SIZE];
    int n=10;
    init_array(pin, n);
    print_array(pin, n);
    sum_function(pin, n);
}

void init_array(int *pin, int n){
    for (int i=0; i< n; i++)
        pin[i]=rand()%100;
}

void print_array(int *pin, int n){
    printf("Array\n------\n%s\t%s\n","index", "value");
    for(int i=0; i<n-1;i++)
        printf("%d\t%d\t\n", i,pin[i]);
    printf("%d\t%d\n", n-1,pin[n-1]);
}

void sum_function(int *pin, int n){
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += pin[i];
    printf("Sum array: %d\n", sum);
}

