
#include <stdio.h>

enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    enum Day today = WEDNESDAY;
    printf("Day number: %d\n", today);
    return 0;
}
