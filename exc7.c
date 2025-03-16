#include <stdio.h>

int main()
{
    printf("Enter First Value: ");
    double firstFPN;
    scanf("%lf", &firstFPN);
    printf("Enter second Value: ");
    double secondFPN;
    scanf("%lf", &secondFPN);
    double prod = secondFPN * firstFPN;
    printf("The Product of these values is %lf\n", prod);
    return 0;
}
