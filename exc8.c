#include <stdio.h>

int main()
{
    printf("Enter temperature in Celsius: ");
    double celsius;
    scanf("%lf", &celsius);
    double farenheit = celsius * 9/5 + 32;
    printf("%lf C = %lf F\n", celsius, farenheit);
    return 0;
}
