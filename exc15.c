#include <stdio.h>

int main()
{
    printf("Enter Value for a: ");
    int firstNum;
    scanf("%d", &firstNum);
    printf("Enter Value for b: ");
    int secondNum;
    scanf("%d", &secondNum);
    int sum = firstNum + secondNum;
    int sub = firstNum - secondNum;
    int prod = firstNum * secondNum;
    double dev = (double)firstNum / secondNum;
    printf("a + b = %d,\n a - b = %d,\n a * b = %d,\n a / b = %lf\n", sum, sub, prod, dev);
    return 0;
}
