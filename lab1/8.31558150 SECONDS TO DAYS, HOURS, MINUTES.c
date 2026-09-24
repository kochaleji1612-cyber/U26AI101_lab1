#include <stdio.h>
int main() {
    long int sec = 31558150;
    int days, hours, minutes;
    days = sec / (24*3600);
    sec = sec % (24*3600);
    hours = sec / 3600;
    sec = sec % 3600;
    minutes = sec / 60;
    printf("Days=%d, Hours=%d, Minutes=%d", days, hours, minutes);
    return 0;
}
