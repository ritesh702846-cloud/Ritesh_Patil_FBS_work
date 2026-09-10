#include <stdlib.h>
void main()
{
	int size,i;
	int *ptr;
	
	printf("Enter a size of array = ");
	scanf("%d",&size);
	
	ptr = malloc(size * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Memory not available");
	}
	for (i=0;i<size;i++)
	{
		printf("enter ptr [%d] = ",i);
		scanf("%d",&ptr[i]);
		
		
	}
	printf("that is ptr = ");
	for (i=0;i<size;i++)
	{
		printf("%d",ptr[i]);
	}
	free(ptr);
	ptr=NULL;
	
}