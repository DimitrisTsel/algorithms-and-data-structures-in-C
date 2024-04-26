#include <stdio.h>
#include <math.h>

int rizes(float a, float b, float c, float *x1, float *x2);

int main(){
    float  riza1,riza2;
    int plithos;

    printf("Dose to a: ");
    scanf("%f", &a);
    printf("Dose to b: ");
    scanf("%f", &b);
    printf("Dose to c: ");
    scanf("%f", &c);

    plithos = rizes(a,b,c,&riza1,&riza2);
    if (plithos==0){
        printf("Kamia riza!");
    }else if (plithos ==1){
        printf("To x1 einai %f", riza1);
    }else{
        printf("To x1 einai %f, x2 einai %f", riza1, riza2);
    }
}

int rizes(float a, float b, float c, float *x1, float *x2){
    float diakrinousa;
    diakrinousa = b*b-4*a*c;

    if (diakrinousa < 0 ){
        return 0;
    }else if (diakrinousa==0){
        *x1 = -b/2*a;
        *x2 = *x1;
        return 1;
    }
    else{
        *x1 = (-b + sqrt(diakrinousa))/(2*a);
        *x2 = (-b - sqrt(diakrinousa))/(2*a);
        return 2;
    }
}