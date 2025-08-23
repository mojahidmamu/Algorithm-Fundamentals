#include <stdio.h>
int main()
{
    int a;
    printf("give number1: ", a);
    scanf("%d", &a);
    char operator;
    printf("Operator is: ", operator);
    scanf(" %c", &operator);
    int b;
    printf("give number2: ", b);
    scanf("%d", &b);

    int sum = a + b;
    int defference = a - b;
    int multiple = a * b;
    int division = a / b;

    if (operator == '+')
    {
        printf("Sum is:%d", sum);
    }
    else if (operator == '-')
    {
        printf("%d", defference);
    }

    // printf("Sum is: %d\n", sum);
    // printf("%d\n", defference);
    // printf("%d\n", multiple);
    // printf("%d\n", division);
    return 0;
}
