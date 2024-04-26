#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void init_array(int *pin, int n);

void sorted_array(int *pin, int n);
void sorted_array_desc(int *pin, int n);
void print_array(int *pin, int n);

int binary_search(int *pin, int n, int x, int *pos);
int binary_search_desc(int *pin, int n, int x, int *pos);
int recursive_binary_search(int *pin, int n, int x, int start, int finish);

int main(){
    int pin[SIZE];
    int n=10;
    srand(time(NULL));
    int x = rand()%10;
    int pos = -1;
    init_array(pin, n);
    sorted_array_desc(pin,n);
    print_array(pin, n);
    int found = binary_search_desc(pin, n, x, &pos);
    // int found = recursive_binary_search(pin, n, x, 0, n-1);
    if (found){
        printf("The number %d exists in position %d\n", x, pos);
    }else{
        printf("The number %d does not exist\n",x);
    }
}

void sorted_array(int *pin, int n){
   int temp=0;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (pin[i]>pin[j]){
                temp=pin[i];
                pin[i]=pin[j];
                pin[j]=temp;
            }
        }
    }

}

void sorted_array_desc(int *pin, int n){
    int temp;
    for (int i=0;i<=n-1;i++){
        for (int j=i+1;j<=n;j++){
            if(pin[i]<pin[j]){
                temp=pin[i];
                pin[i]=pin[j];
                pin[j]=temp;
            }
        }
    }
}

int binary_search(int *pin, int n, int x, int *pos){
    int found=0;
    int start = 0;
    int finish = n-1;
    int middle;
    while (start<=finish)
    {
        middle = (start+finish)/2;
        if (x==pin[middle]){
            *pos=middle;
            return 1;
            break;
        }else if(x<pin[middle]){
            printf("x: %d middle: %d\n", x,pin[middle]);
            finish = middle-1;
        }else if (x>pin[middle]){
            printf("x: %d middle: %d\n", x,pin[middle]);
            start= middle+1;
        }
    }
    *pos = -1;
    return 0;
}

int binary_search_desc(int *pin, int n, int x, int *pos){
    int middle;
    int start=0;
    int finish=n-1;
    while(start<=finish){
        middle = (start+finish)/2;
        if (x==pin[middle]){
            *pos=middle;
            return 1;
        }else if(x>pin[middle]){
            finish=middle-1;
        }else{
            start=middle+1;
        }
    }
}

int recursive_binary_search(int *pin, int n, int x, int start, int finish){
    int middle;
    if (start>finish){
        return 0;
    }else{
        middle = (start+finish)/2;
        if (x==pin[middle]){
            return 1;
        }else if(x<pin[middle]){
            finish = middle-1;
            return recursive_binary_search(pin,n,x,start,finish);
        }else{
            start = middle+1;
            return recursive_binary_search(pin,n,x,start,finish);
        }
    }
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