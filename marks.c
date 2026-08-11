void main()
{
	float s1,s2,s3,s4,s5;
	float total,percentage;
	printf("enter s1 ");
	scanf("%f",&s1);
		printf("enter s2 ");
	scanf("%f",&s2);
		printf("enter s3 ");
	scanf("%f",&s3);
		printf("enter s4 ");
	scanf("%f",&s4);
		printf("enter s5 ");
	scanf("%f",&s5);
	total=s1+s2+s3+s4+s5;
    percentage = (total / 500) * 100;
     
     printf("total%f\n",total);
     printf("percentage%f",percentage);
	
}