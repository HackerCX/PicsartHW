#include <stdio.h>

int main()
{
    printf("Enter Value for a: ");
    int firstNum;
    scanf("%d", &firstNum);
    printf("Enter Value for b: ");
    int secondNum;
    scanf("%d", &secondNum);
    int mod = firstNum % secondNum;
    printf("Mod = %d\n", mod);
    return 0;
}
