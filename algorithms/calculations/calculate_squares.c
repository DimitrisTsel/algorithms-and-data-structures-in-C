#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void init_array(int *pin, int n);
void print_array(int *pin, int n);
void calculate_squares(int *pin, int n);

int main(){
    int pin[SIZE];
    int n=10;

    init_array(pin, n);
    print_array(pin, n);
    calculate_squares(pin,n);
}
void init_array(int *pin, int n){
    for (int i=0; i< n; i++)
        pin[i]=rand()%10;
}

void print_array(int *pin, int n){
    printf("Array\n------\n%s\t%s\n","index", "value");
    for(int i=0; i<n-1;i++)
        printf("%d\t%d\t\n", i,pin[i]);
    printf("%d\t%d\n", n-1,pin[n-1]);
}

void calculate_squares(int *pin, int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=pin[i]*pin[i];
    }
    printf("The sum of squares of the array is: %d\n", sum);
}