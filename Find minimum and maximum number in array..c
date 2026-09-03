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
	min =arr[0];
	max =arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min =arr[i];
		}
		if(arr[i]>max)
		{
		max =arr[i];	
		}
	}
	printf("min no is %d\n",min);
	printf("max no is %d",max);
}