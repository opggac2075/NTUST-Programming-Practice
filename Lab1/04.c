#include <stdio.h>
int main() {
    int integer1 = 0, integer2 = 0;
    printf("please enter your integer1: ");
    scanf("%d",&integer1);

    printf("please enter your integer2: ");
    scanf("%d",&integer2);

    if(integer1 % integer2== 0) {
        printf("兩者為倍數");
    } else {
        printf("兩者不為倍數");
    }







    return 0;
}
