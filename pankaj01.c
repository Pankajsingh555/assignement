#include <stdio.h>

int main() 
{
    char operator;
    double num1, num2, result;

    do 
    {
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        if (operator != '+' && operator != '-' && operator != '*' && operator != '/') 
        {
            printf("Invalid operator! Please enter a valid operator.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        if (operator == '+') 
        {
            result = num1 + num2;
        } 
        else if (operator == '-') 
        {
            result = num1 - num2;
        } 
        else if (operator == '*') 
        {
            result = num1 * num2;
        } 
        else if (operator == '/') 
        {
            if (num2 != 0) 
            {
                result = num1 / num2;
            } 
            else 
            {
                printf("Error! Division by zero is not allowed.\n");
                continue;
            }
        }

        printf("Result: %lf\n", result);

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &operator);

    } 
    while (operator == 'y' || operator == 'Y');

    printf("Calculator closed.\n");

    return 0;
}
