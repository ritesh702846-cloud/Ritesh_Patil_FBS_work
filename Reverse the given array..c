void main()
{
	int arr[5]={10,20,30,40,50};
	int i,j,temp=0;
	printf("arr:\n" );
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	i=0;
	j=4;
	while(i<j)
	{
		temp=arr[i];
		arr[i] = arr[j];
		arr[j]=temp;
		
		i++;
		j--;
	}
	for(j=0;j<5;j++)
	{
		printf("reverse: %d\n",arr[j]);
	}
	
	
}
