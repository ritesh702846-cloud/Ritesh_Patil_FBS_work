#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter first number = ");
    scanf("%d", &a);

    printf("Enter second number = ");
    scanf("%d", &b);

    printf("Enter third number = ");
    scanf("%d", &c);

    if(a > b)
    {
        if(a > c)
        {
            printf("Greatest = %d", a);
        }
        else
        {
            printf("Greatest = %d", c);
        }
    }
    else
    {
        if(b > c)
        {
            printf("Greatest = %d", b);
        }
        else
        {
            printf("Greatest = %d", c);
        }
    }
}