#include <stdio.h>
int main() {
    float m1,m2,m3,m4,m5,total,per;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    per = total/5;
    printf("Total = %.2f\nPercentage = %.2f%%", total, per);
    return 0;
}
