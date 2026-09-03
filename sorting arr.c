void main()
{
	int arr[5]={40,50,30,10,20};
	int i,j,temp=0;
	printf("arr:\n" );
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(i = 0; i < 5 - 1; i++)
{
    for(j = i + 1; j < 5; j++)
    {
        if(arr[i] > arr[j])
        {
            
	
		temp=arr[i];
		arr[i] = arr[j];
		arr[j]=temp;
		
		
	
        }
    }
}
	printf("sort:\n");
	for(j=0;j<5;j++)
	{
		printf(" %d\n",arr[j]);
	}
	
	
}
