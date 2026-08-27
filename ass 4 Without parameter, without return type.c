void perfect_no();
void prime_no();
void prime_no_range();
void prefect_in_range();
void strong_no();
void main()
{
	//perfect_no
    perfect_no();
    printf("\n");
    //prime no
    prime_no();
    printf("\n");
    // prime_no_range()
    prime_no_range();
    printf("\n");
    //prefect_in_range
    prefect_in_range();
    printf("\n");
    //strong_no();
    strong_no();
}
void perfect_no()
{
    int n,i,j,sum;
    printf("enter n to check perfect no = ");
    scanf("%d",&n);

    i=1;

    while(i<=n)
    {
        sum=0;
        j=1;

        while(j<i)
        {
            if(i%j==0)
                sum=sum+j;

            j++;
        }

        if(sum==i)
        {
            printf("this is perfect no %d\n",i);
        }

        i++;
    }
}
void prime_no()
{
	int num;
	int status =0;
	printf("Eneter a no to check prime no = ");
	scanf("%d",&num);
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			status = 1;
			
		}
	}
	if(status==0)
	{
		printf("%d no is prime",num);
	}
	else
	{
		printf("%d no is not prime",num);
	}
}
void prime_no_range()
{
	int n,i=1;
	printf("Enter a no primre in range = ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n ",i);
		i++;
}
}
void prefect_in_range()
{
	int n,i,sum=0;
	printf("enter a no prefect in range = ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("%d is perfect no ",n);
	}
	else
	{
		printf("%d is not perfect no ",n);
	}
	
	
	
	
	
}
void strong_no()
{
	int n,origanal,digit;
	int fact,sum=0,i;
	printf("enter a no = ");
	scanf("%d",&n);
	
	origanal=n;
	while(n>0)
	{
		digit=n%10;
		
		fact=1;
		i=1;
		while(i<=digit)
		{
			fact=fact*i;
			i++;
		}
		sum =sum+fact;
		n = n/10;
	}
	if(sum == origanal)
    {
        printf("%d is Strong Number", origanal);
    }
    else
    {
        printf("%d is Not Strong Number", origanal);
    }
	
}