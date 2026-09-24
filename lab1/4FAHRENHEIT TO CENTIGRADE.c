#include <stdio.h>
int main() {
    float f, c;
    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Centigrade = %.2f", c);
    return 0;
}
