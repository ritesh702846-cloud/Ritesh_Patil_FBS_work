#include <stdio.h>

void checkPalindrome(int *n)
{
    int original = *n;
    int temp = *n;
    int digit, reverse = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (original == reverse)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a Palindrome number");
    }
}

int main()
{
    int num;

    printf("Enter no = ");
    scanf("%d", &num);

    checkPalindrome(&num);

    return 0;
}