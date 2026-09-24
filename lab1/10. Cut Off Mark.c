#include <stdio.h>
int main() {
    float M, P, C, E, CM;
    printf("Enter M(out of 200) P(out of 200) C(out of 200) E(out of 100): ");
    scanf("%f %f %f %f", &M, &P, &C, &E);
    CM = M/2 + P/2 + C/2 + E;
    printf("Cut off Mark = %.2f", CM);
    return 0;
}
