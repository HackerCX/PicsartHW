#include <stdio.h>

int main()
{
    printf("Enter First Value: ");
    int firstValue;
    scanf("%d", &firstValue);
    printf("Enter second Value: ");
    int secondValue;
    scanf("%d", &secondValue);
    int thirdValue;
    printf("Enter third Value");
    scanf("%d", &thirdValue);
    double avg = (firstValue + secondValue + thirdValue) / 3;
    printf("The Average value of these values is %lf\n", avg);
    return 0;
}
