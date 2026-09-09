void main ()
{
	char arr[20];
	int n;
	printf("enter a name  = ");
	scanf("%s",arr);
	
	printf("%s\n",arr);
	 
	printf("enter index to remove = ");
	scanf(" %d",&n); 
	
	
	int i=0;
	for(i=n;arr[i]!='\0';i++)
	{
	arr[i]=arr[i+1];	
	}
	printf("new string = %s",arr);
}
	
	
