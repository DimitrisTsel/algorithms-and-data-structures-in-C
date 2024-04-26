#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int hidden = rand()%100;
    int num;
    printf("insert a number");
    scanf("%d", &num);

    do{
        if (num < hidden){
            printf("insert a bigger number");
            scanf("%d", &num);
        }else if (num > hidden){
            printf("insert a smaller number");
            scanf("%d", &num);
        }
    } while(num != hidden);

   printf("The numbers are equal: %d = %d", num,hidden);

}