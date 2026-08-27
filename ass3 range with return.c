void one_to_n(int);
void five_cha_table(int );
void main()
{
	int n;
	printf("enter a n to print range = ");
	scanf("%d",&n);
	one_to_n( n);
	printf("\n");
	
	//5 cha table
five_cha_table(5);
	
	return 0;
	
}
void one_to_n(int n)
{
	int i=1;
	while (i<=n)
	{
		printf("%d ",i);
		i++;
	}
}
void five_cha_table(int n)
{
	int a=5,i=1;
	while (i<=10)
	{
		printf("%d * %d =%d\n",a,i,a*i);
		i++;
	
}}
