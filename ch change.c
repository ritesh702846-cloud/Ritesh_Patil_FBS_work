void main ()
{
	char arr[20];
	char temp;
	
	printf("enter a name  = ");
	scanf("%s",arr);
	
	printf("%s\n",arr);
	
	int i=0;
	while (arr[i] != '\0') 
	{
		i++;
	}
	
	temp = arr[0];
	arr[0] = arr[i-1];
	arr[i-1] = temp;
	 printf("%s",arr);
}
	
	
