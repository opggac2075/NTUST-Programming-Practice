#include <stdio.h>
int main() {
    int second1 = 0,hour = 0, minute = 0,second = 0;
    printf("pleace enter your time: ");
    scanf("%d",&second);

    hour = second / 3600;

    minute = second / 60 % 60;
    second1 = second % 60;

    printf("%d : %d : %d ",hour,minute,second1);







    return 0;
}
