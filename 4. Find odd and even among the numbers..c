void main()
{
	int n,i,sum=0;
	int arr[100];
	
	
	printf("enter a size = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d = ", i + 1);
        scanf("%d", &arr[i]);
        
	}
	for(i=0;i<n;i++)
	if(arr[i]%2==0)
	{
		printf("%d is a odd \n",arr[i]);
	}
	
	else
	{
		printf("%d is a even\n ",arr[i]);
	}
	

}