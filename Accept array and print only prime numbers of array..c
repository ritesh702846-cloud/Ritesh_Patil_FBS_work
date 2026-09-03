void main()
{
	int n,i,j,count=0;
	int arr[100];
	
	
	printf("enter a size = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d = ", i + 1);
        scanf("%d", &arr[i]);
        
	}
	for (i = 0; i < n; i++)
{
    count = 0;

    for (j = 1; j <= arr[i]; j++)
    {
        if (arr[i] % j == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("that is prime no = %d ", arr[i]);
    }
}
	

}