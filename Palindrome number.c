void main()
{
	int n,origianl,digit,reverse=0;
	printf("enter no = ");
	scanf("%d",&n);
	origianl=n;
	while(n<0)
	{
		digit = n%10;
		reverse = reverse*10+digit;
		n = n/10;
	}
	if (origianl==reverse)
	{
	printf("Not a Palindrome number");	
	}

	else
	{
	printf("Palindrome number");
	
}
}
	