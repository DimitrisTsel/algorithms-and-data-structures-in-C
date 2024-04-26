#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;

    p=malloc(sizeof(int));
    if (!p)
    {
        printf("Adunamia desmausis mnimis! ");
        exit(0);
    }
    printf("Dose enan akeraio arithmo: ");
    scanf("%d", p);
    printf("Pliktrologisate ton %d\n", *p);
    free(p);
}