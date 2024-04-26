#include <stdio.h>

#define SIZE 100
void f(int *p, int n);

int main(){
    int pin[SIZE];
    int i;

    for (i=0;i<SIZE;i++){
        pin[i]=i;
    }
    for (i=0;i<SIZE;i++){
        printf("%d, ",pin[i]);
    }
    f(pin, SIZE);
    for (i=0;i<SIZE;i++){
        printf("%d, ",pin[i]);
    }
}

void f(int *p, int n)
{
    int i;
    for (i=0;i<n;i++){
        p[i]=2*i;
    }
}