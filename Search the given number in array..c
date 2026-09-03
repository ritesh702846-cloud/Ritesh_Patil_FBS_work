void main()
{
	int n,i,found=0;
	int arr[100];
	
	
	printf("enter a size = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d = ", i + 1);
        scanf("%d", &arr[i]);
	}
	int search;
	printf("enter no to search = ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("no is found %d ",search);
	}
	else
	{
		printf("no is not found %d!");
	}
	
	
	
	
}