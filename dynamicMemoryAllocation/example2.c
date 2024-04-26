#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int i,N;

    printf("Dose diastasi pinaka: ");
    scanf("%d",&N);

    p=malloc(sizeof(int)*N); //Desmeuei dunamika xwro gia pinaka 10 akeraiwn
    if(!p)
    {
        printf("adunamia dilosis mnimis");
        exit(0);
    }
    for (i=0;i<N;i++){
        p[i]=i*i*i;
        printf("%d,", p[i]);
    }
    free(p);

}