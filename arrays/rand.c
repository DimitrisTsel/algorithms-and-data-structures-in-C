#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int x,i;
    srand(time(NULL));
    // srand(5);

    for (i=0; i<10; i++)
    {
        x=rand() % 100;
        printf("\n%d", x);
    }
}
