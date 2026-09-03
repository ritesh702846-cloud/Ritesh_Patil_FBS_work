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
        sum =sum + arr[i];
	}
	printf("sum of all array %d",sum);

}