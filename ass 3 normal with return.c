int Armstrong_number(int );
int first_and_last_sum( int);
int Palindrome_number(int );
int main()
{
	int n,result;
	printf("enter the no to check Armstrong number = ");
	scanf("%d",&n);
	result =  Armstrong_number(n );
	if (result == 1)
	{
		printf("Armstrong_number");
	}
	else
	{
		printf(" not Armstrong_number");
			printf(" \n");
		
	}


printf("enter no to sum first and last = ");
	 scanf("%d",&n);
	 result = first_and_last_sum(n);
	 
	 printf("first+last = %d",result);
	 printf(" \n");
	 
	 
	 //Palindrome_number
	 int m;
	 printf("enter no to check palindrome = ");
	scanf("%d",&m);
	result = Palindrome_number(m );
	if(result == 1)
	{
		printf("Palindrome_numbe");
	}
	else
	{
		printf("notPalindrome_numbe");
	}
	
	 return 0;
}






int Armstrong_number(int n)
{
	int origianl,digit,sum=0;
	
	origianl=n;
	while(n>0)
	{
		digit = n%10;
		sum = sum + digit*digit*digit;
		n = n/10;
	}
      if(sum==origianl)
       return 1;
       else
      return 0;
}
int first_and_last_sum(int n)
{
	 int last,first,sum;
	 last = n%10;
	 while(n >= 10)
	 {
	 	n=n/10;
	 }
	 first=n;
	 sum = first+last;
	 return sum;
	 //printf("%d+%d = %d",first,last,sum);
	
}
int Palindrome_number(int m )
{
	int origianl,digit,reverse=0;
	
	origianl=m;
	while(m<0)
	{
		digit = m%10;
		reverse = reverse*10+digit;
		m = m/10;
	}
	if (origianl==reverse)
	{
	return 1;	
	}

	else
	{
	return 0;
	
}
}
	