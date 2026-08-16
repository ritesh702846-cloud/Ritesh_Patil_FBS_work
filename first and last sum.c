void main()
{
	 int n,last,first,sum;
	 printf("enter no = ");
	 scanf("%d",&n);
	 last = n%10;
	 while(n >= 10)
	 {
	 	n=n/10;
	 }
	 first=n;
	 sum = first+last;
	 printf("%d+%d = %d",first,last,sum);
	
}