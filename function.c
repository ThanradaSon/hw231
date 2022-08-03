#include <stdio.h>

void inputWandH(double *ptrW, double *ptrH){
    printf("input Width: ");
    scanf("%lf", ptrW);
    printf("input Height: ");
    scanf("%lf", ptrH);
}

void calRecArea(double *ptrW, double *ptrH, double *pArea){
    *pArea = *ptrW * *ptrH;
}

void printAns(double *pArea){
    printf("Rectangle area: %.2lf\n", *pArea);
}

int main(){
    double W, H, Area;
    inputWandH(&W, &H);
    calRecArea(&W, &H, &Area);
    printAns(&Area);
}//6410406649 ธัญรดา สอนนาคงเจริญ