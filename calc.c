#include <stdio.h>

int main()
{
wrongOperator:
    printf("Enter operation, what you want to calc (for calculating root enter r): ");
    char oper = ' '; 
    scanf(" %c", &oper);
    double x=0, y=0;
notMatchToRoot:
    printf("Enter first number: ");
    scanf("%lf", &x);
    if(oper != 'r'){
jumphere:
    printf("Enter second number: ");
    scanf("%lf", &y);
    }
    if(oper == '+'){
        //gumarum
        double sum = x + y;
        printf("%lf + %lf = %lf\n", x, y, sum); 
    }else if(oper == '-'){
        //hanum
        double sub = x - y;
        printf("%lf - %lf = %lf\n", x, y, sub); 
    }else if(oper == '*'){
        //bazmapatkum
        double prod = x * y;
        printf("%lf * %lf = %lf\n", x, y, prod);
    }else if(oper == '/'){ 
        //bajanum
        if(y == 0){
            printf("Numbers cant devide by 0\n");
            goto jumphere;
        }
        double dev = x / y;
        printf("%lf / %lf = %lf\n", x, y, dev);
    }else if(oper == '%'){
        //mnacord
        int dev = x / y;
        double mod = x - dev * y;
        printf("Mod = %lf\n", mod);
    }else if(oper == '^'){
        //astichan bardzracnel
        double s = x;
        for(int i=1; i < y; i++){
            s *= x;
        }
        printf("%lf ^ %lf = %lf\n", x, y, s);
    }
    else if(oper == 'r'){
        if(x < 0){
            printf("Cannot calculate square root of a negative number.\n");
            goto notMatchToRoot;
        }
        int start = 0, end = x;
    int mid;
    double root = 0;
    for (; start <= end;) {
        mid = (start + end) / 2;

        if (mid * mid == x) {
            root = mid;
            break;
        }

        if (mid * mid < x) {
            root = start;  
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    float increment = 0.1;
    for (int i = 0; i < 5; i++, increment /= 10) {
        for (; root * root <= x; root += increment);
        root -= increment; 
    }
        printf("Root for %lf = +-%lf\n", x, root);
    }
    else{
        //chnaxatesvac operator
        printf("You entered wrong operation\n");
        goto wrongOperator;
    }
    return 0;
}
