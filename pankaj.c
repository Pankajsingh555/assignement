#include <stdio.h>

int isHappy(int n) 
{
    int sum = 0;
    while (n > 0) 
    {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int main() 
{
    printf("Two-digit happy numbers are:\n");

    for (int i = 10; i <= 99; i++) 
    {
        int num = i;
        while (num != 1 && num != 4) 
        {
            num = isHappy(num);
        }
        if (num == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
