void main()
{


	int m=100;
	printf("enter marks = ");
	scanf("%d",&m);
	
	if(m>75)
	{
		printf("Distinction");
	}
	else
	{
		if(m>65)
		{
			printf("First Class");
		}
		else
		{
			if(m>55)
			{
				printf("Second Class");
			}
			else
			{
				if(m>=40)
				{
					printf("Pass Class");
				}
				else
				{
				printf("fail");	
				}
		}
		
	}
	
}}