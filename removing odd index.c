void main()
{
	char arr[30];
	int i,j=0;
	printf("enter a name = ");
	scanf("%s",arr);
	
	for(i=0;arr[i]!='\0';i++)
	{
		if (i % 2 != 0)
		{
			arr[j]=arr[i];
		j++;
        }
    }

    arr[j] = '\0';

    printf("New string = %s", arr);

}