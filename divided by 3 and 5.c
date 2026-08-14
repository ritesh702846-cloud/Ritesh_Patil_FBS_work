void main()
{
	int no;
	printf("enter no = ");
	scanf("%d",&no);
	if(no%3 == 0 && no%5 == 0)
	{
		printf("no divided by both");
	}
	else if (no%3 == 0)
	{
		printf("only divided by 3 ");
	}
	else if (no%5 == 0)
	{
		printf("only divided by 5");
	}
}