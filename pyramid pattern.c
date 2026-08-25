#include <stdio.h>

void main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        for (int star = 1; star <= 2 * i - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    
}