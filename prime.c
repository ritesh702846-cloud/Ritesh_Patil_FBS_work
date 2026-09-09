void checkprimeno(int *n)
{
	int status =0;
	for(int i=2;i<*n;i++)
	{
		if(*n%i==0)
		{
			status = 1;
			
		}
	}
	if(status==0)
	{
		printf("%d no is prime",*n);
	}
	else
	{
		printf("%d no is not prime",*n);
	}
}


int main()
{

	int num;	
	printf("Eneter a no = ");
	scanf("%d",&num);
	
	checkprimeno(&num);
}