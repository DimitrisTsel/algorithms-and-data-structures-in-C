#include <stdio.h>

#define SIZE 10

void print_array(int *pin, int n);
void fibonacci(int *pin, int n);

int main(){
    int pin[SIZE];
    int n=10;
    fibonacci(pin,n);
    print_array(pin, n);

}
void print_array(int *pin, int n){
    printf("Fibonacci Array\n------\n%s\t%s\n","index", "value");
    for(int i=0; i<n-1;i++)
        printf("%d\t%d\t\n", i+1,pin[i]);
    printf("%d\t%d\n", n,pin[n-1]);
}

void fibonacci(int *pin,int n){
    pin[0]=1;
    pin[1]=1;

    for(int i=2;i<n;i++){
        pin[i]=pin[i-1]+pin[i-2];
    }
}


