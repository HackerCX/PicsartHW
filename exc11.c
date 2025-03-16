#include <stdio.h>

int main()
{
    printf("Enter Time in format h.m : ");
    double time;
    scanf("%lf", &time);
    int hours = time / 1;
    double mins = (time - hours) * 100;

    int timeInMinutes = hours * 60 + mins;
    printf("Time in minutes equals to %d minutes\n", timeInMinutes);
    return 0;
}
