#include <stdio.h>
int main() {
    double length = 0, v = 0, a = 0;

    printf("please enter your v: ");
    scanf("%lf",&v);


    printf("please enter your a: ");
    scanf("%lf",&a);
    length = (v * v) / (2 * a);

    printf("length: %lf",length);







    return 0;
}
