#include <stdio.h>

int main()
{
    printf("Enter your age: ");
    int age;
    scanf("%d",&age);
    int ageInDays = age * 365;
    printf("Your age in days =  %d\n", ageInDays);
    return 0;
}
