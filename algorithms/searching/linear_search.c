#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void init_array(int *pin, int n);
void print_array(int *pin, int n);
int linear_search(int *pin, int n, int x);

int main(){
    int pin[SIZE];
    int n=10;
    srand(time(NULL));
    int x = rand()%10;

    init_array(pin, n);
    print_array(pin, n);
    printf("\n\nThe number x=%d found in index %d\n",x,linear_search(pin, n, x));

}
int linear_search(int *pin, int n, int x){
    int found=-1;
    for (int i=0;i<n;i++){
        if (pin[i]==x)
            return i;
    }
    return -1;
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