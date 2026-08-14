void main()
{
    int a, b, c;

    printf("enter 1st side = ");
    scanf("%d", &a);

    printf("enter 2nd side = ");
    scanf("%d", &b);

    printf("enter 3rd side = ");
    scanf("%d", &c);

    if(a == b)
    {
        if(b == c)
        {
            printf("Equilateral");
        }
        else
        {
            printf("Isosceles");
        }
    }
    else
    {
        if(a == c)
        {
            printf("Isosceles");
        }
        else
        {
            if(b == c)
            {
                printf("Isosceles");
            }
            else
            {
                printf("Scalene");
            }
        }
    }
}