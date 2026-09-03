void main()
{
	int n,i;
	int arr_1[100];
	int arr_2[100];
	int arr_3[100];
	
	printf("Enter a size = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter arr_1:%d = ",i+1);
		scanf("%d",&arr_1[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("Enter arr_2:%d = ",i+1);
		scanf("%d",&arr_2[i]);	
	}
	for(i=0;i<n;i++)
	{
		arr_3[i] = arr_1[i] + arr_2[i];
		
	}
	printf("that is arr_3: ");
	
	for(i=0;i<n;i++)
	{
	printf("%d ",arr_3[i] );	
	}
	
}