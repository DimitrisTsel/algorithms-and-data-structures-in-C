#include <stdio.h>
#include <stdlib.h>

int main()
{
    double **array;
    int M,N;
    printf("Dose diastasi grammwn: ");
    scanf("%d", &M);
    printf("Dose megethos stilwn: ");
    scanf("%d", &N);

    array = malloc(sizeof (double *)*M);
    if (!array){
        printf("Mi eparkis xwros apothikeusis!");
        exit(0);
    }
    for (int i=0;i<M;i++){
        array[i]=malloc(sizeof (double)*N);
        if(!*array){
            printf("Mi eparkis xwros apothikeusis!");
            exit(0);
        }
    }

printf("\nThe space allocated for the 2D array is: %lu + %lu + %lu = %lu bytes\n",
       M * N * sizeof(double), M * sizeof(double *), sizeof(double **),
       M * N * sizeof(double) + M * sizeof(double *) + sizeof(double **));


    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            array[i][j]=i*j;
            printf("%2f", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<M;i++){
        free(array[i]);
    }



    free(array);

}