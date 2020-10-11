#include <stdio.h>
int main() {
    int integer1 = 0,integer2 = 0, sum = 0, product = 0 ,difference = 0, quotient = 0, remainder = 0;
    printf("please enter your integer1: ");
    scanf("%d",&integer1);
    printf("please enter your integer2: ");
    scanf("%d",&integer2);

    sum = integer1 + integer2;
    printf("sum: %d\n",sum);

    product = integer1 * integer2;
    printf("product: %d\n",product);

    difference = integer1 - integer2;
    printf("difference: %d\n",difference);

    quotient = integer1 / integer2;
    printf("quotient: %d\n",quotient);

    remainder = integer1 % integer2;
    printf("remainder: %d\n",remainder);

    return 0;
}
