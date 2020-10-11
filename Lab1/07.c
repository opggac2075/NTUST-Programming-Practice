#include <stdio.h>
int main() {
    double kiograms = 0, initial = 0, final_t = 0, Q = 0,M = 0;

    printf("please enter your kiograms: ");
    scanf("%lf",&kiograms);


    printf("please enter your initial temperature: ");
    scanf("%lf",&initial);

    printf("please enter your final temperature: ");
    scanf("%lf",&final_t);

    M = kiograms;
    Q = M * (final_t - initial) * 4184;

    printf("Q: %.1lf",Q);







    return 0;
}
