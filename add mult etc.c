void main ()
{
	int a,b;
	char op;
	printf("perform operation = ");
	scanf("%d",&a);
	
	
	scanf(" %c",&op);
	
	printf("enter sec no = ");
	scanf("%d",&b);
	
	if(op=='+')
	{
		printf("result =%d",a+b);
	}
	else
	{
		if(op=='-')
		{
			printf("resullt = %d",a-b);
		}
		else
		{
			if(op=='*')
			{
				printf("result= %d",a*b);
			}
			else {
				if(op=='/')
				{
					printf("result= %d ",a/b);
				}
				else 
				{
					printf("invail");
				}
			}
			
		}
	}
}