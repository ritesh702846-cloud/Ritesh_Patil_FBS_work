void main()
{
	int n,origianl,digit,sum=0;
	printf("enter the no = ");
	scanf("%d",&n);
	origianl=n;
	while(n>0)
	{
		digit = n%10;
		sum = sum + digit*digit*digit;
		n = n/10;
	}
      if(sum==origianl)
       printf("Armstrong number");
       else
       printf("Not an Armstrong number");
}