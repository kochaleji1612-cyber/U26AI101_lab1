#include <stdio.h>
int main() {
    int total, hr, min, sec;
    printf("Enter total seconds: ");
    scanf("%d", &total);
    hr = total / 3600;
    min = (total % 3600) / 60;
    sec = total % 60;
    printf("%d Hour %d Min %d Sec", hr, min, sec);
    return 0;
}
