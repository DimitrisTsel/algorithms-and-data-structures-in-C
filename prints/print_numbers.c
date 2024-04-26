#include <stdio.h>

int main(){
    int i,j;
    int N=9;

    for (i=N;i>=1;i--){
        for (j=1;j<=i;j++){
            printf("%d",j);
        }
        for (j=1;j<=N-i;j++){
            printf(" ");
        }
        for (j=1;j<=N-i;j++){
            printf(" ");
        }
        for (j=i;j>=1;j--){
            printf("%d", j);
        }
        for (j=1;j<=i;j++){
            printf("%d",j);
        }
        for (j=1;j<=N-i;j++){
            printf(" ");
        }
        for (j=1;j<=N-i;j++){
            printf(" ");
        }
        for (j=i;j>=1;j--){
            printf("%d", j);
        }
        for (j=1;j<=i;j++){
            printf("%d",j);
        }



        printf("\n");
    }



}