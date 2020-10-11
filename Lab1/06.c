#include <stdio.h>
int main() {
    double d = 0,mg = 0, pg = 0,cost = 0;
    printf("pleace enter your distance: ");
    scanf("%lf",&d);

    printf("pleace enter your miles per gallon: ");
    scanf("%lf",&mg);

    printf("pleace enter your price per gallon: ");
    scanf("%lf",&pg);

    cost = d / mg * pg;



    printf("The cost of driving is $%.2lf",cost);







    return 0;
}
