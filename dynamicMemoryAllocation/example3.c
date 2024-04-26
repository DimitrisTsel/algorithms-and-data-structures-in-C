#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p;
    int i,j,N,M;

    printf("Dose grammes pinaka: ");
    scanf("%d",&M);
    printf("Dose stiles pinaka: ");
    scanf("%d",&N);

    p=malloc(sizeof(int *)*M);
    if(!p)
    {
        printf("adunamia dilosis mnimis");
        exit(0);
    }
    for (i=0;i<M;i++){
        p[i]=malloc(sizeof(int)*N);
        if(!p)
        {
            printf("adunamia dilosis mnimis");
            exit(0);
        }
    }

    for (i=0;i<M;i++){
        for (j=0;j<N;j++){
            p[i][j]=i*j;
            printf("%2d,", p[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<M;i++){
        free(p[i]);
    }
    free(p);
}