#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void init_array(int *pin, int n);
void print_array(int *pin, int n);
int calculate_times(int *pin, int n, int x);

int main(){
    int pin[SIZE];
    int n=10;
    srand(time(NULL));
    int x = rand()%10;

    init_array(pin, n);
    print_array(pin, n);
    printf("The number %d exists %d times", x, calculate_times(pin,n,x));
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

int calculate_times(int *pin, int n, int x){
    int cnt=0;
    for (int i=0;i<n;i++){
        if (pin[i]==x)
            cnt+=1;
    }
    return cnt;
}