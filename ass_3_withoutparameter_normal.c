void main()
{
Armstrong_number();
printf("\n");
firt_and_last_sum();
printf("\n");
Palindrome_number();	
}
Armstrong_number()
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
firt_and_last_sum()
{
	 int n,last,first,sum;
	 printf("enter no = ");
	 scanf("%d",&n);
	 last = n%10;
	 while(n >= 10)
	 {
	 	n=n/10;
	 }
	 first=n;
	 sum = first+last;
	 printf("%d+%d = %d",first,last,sum);
	
}
Palindrome_number()
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
	