void checkevenodd(int *n)
{

   if(*n %2 == 0)
{
		printf("even number");
	}
	else
	{
		printf("odd number");
	}
}




int main ()
{
	int number;
	printf("Enter the number ");
	scanf("%d",&number);
	
	checkevenodd(&number);
	return 0;
}