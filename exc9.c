#include <stdio.h>

int main()
{
    printf("Enter Your Height: ");
    double height;
    scanf("%lf", &height);
    printf("Enter your Weight : ");
    double weight;
    scanf("%lf", &weight);
    double bmi = weight / (height * height);
    printf("Your BMI is %lf\n", bmi);
    return 0;
}
