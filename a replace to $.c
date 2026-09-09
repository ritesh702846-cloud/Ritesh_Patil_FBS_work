void main ()
{
	char arr[20];
	
	printf("enter a name  = ");
	scanf("%s",arr);
	
	printf("%s\n",arr);
	 
	
	
	int i;
	
	
	for(i=0;arr[i]!='\0';i++)
	{
		if (arr[i] == 'a')
		{
		   arr[i]='$';
		}
		}
		printf("%s",arr);
		
		
	}
	
	
