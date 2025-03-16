#include <stdio.h>

int main()
{
    printf("Enter Your Symbol: ");
    char symbol = ' ';
    scanf("%c", &symbol);
    int symbolInDec = symbol;
    printf("Your Symbol in decimal system = %d\n", symbolInDec);
    return 0;
}
