void main ()
{
	char arr[20];
	char ch;
	printf("enter a name  = ");
	scanf("%s",arr);
	
	printf("%s\n",arr);
	 
	printf("enter a ch to find = ");
	scanf(" %c",&ch); 
	
	int i;
	int flag=0;
	
	for(i=0;arr[i]!='\0';i++)
	{
		if (arr[i] == ch)
		{
		printf("ch is found = %c",i);
		
		flag =1;
		break ;	
	}
		}
		if (flag ==0)
		{
			printf("ch is not found",);
		}
	}
	
	
