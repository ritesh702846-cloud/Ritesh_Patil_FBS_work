#include <stdio.h>

int main()
{
    char arr[30];

    printf("Enter a name = ");
    fgets(arr, 30, stdin);

    printf("%s", arr);

    
    int i;
    
    for(i=0;arr[i]!='\0';i++)
    {
    if(arr[i]==' ')	
    {
    	arr[i]='#';
    }
	}
	printf("%s",arr);
}