void main()
{
	int n,i;
	int arr[100];
	int min, max;
	
	printf("enter a size = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d = ", i + 1);
        scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i += 2)
	{
		printf("%d ",arr[i]);
	}
	
}