#include <stdio.h>
int main() {
    int sum = 0, average = 0, product = 0, smallest = 0,Largest = 0,integer1 = 0,integer2 = 0,integer3 = 0;

    printf("Enter three different integers: ");
    scanf("%d %d %d",&integer1,&integer2,&integer3);

    sum = integer1 + integer2 + integer3;
    printf("sum is %d\n",sum);

    average = sum / 3;
    printf("Average is %d\n",average);

    product = integer1 * integer2 * integer3;
    printf("Average is %d\n",product);



   if (integer1 < integer2 && integer2 < integer3) {
        printf("Smallest is %d\n",integer1);
    } else if (integer2 < integer3) {
        printf("Smallest is %d\n",integer2);
    } else {
        printf("Smallest is %d\n",integer3);
    }

    if (integer1 > integer2 && integer2 > integer3) {
        printf("Largest is %d\n",integer1);
    } else if (integer2 > integer3) {
        printf("Largest is %d\n",integer2);
    } else {
        printf("Largest is %d\n",integer3);
    }












    return 0;
}
