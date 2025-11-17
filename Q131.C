#include <stdio.h>

int main()
{
    enum days
    {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);

    return 0;
}
