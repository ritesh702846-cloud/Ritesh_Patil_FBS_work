void main()
{
	float price,discount,tprice;
	char student;
	
	printf("enter price = ");
	scanf("%f",&price);
	printf("are you student(y/n) = ");
	scanf(" %c",&student);
	if(student=='y')
	{
		if(price>=500)
		{
			discount = price * 20 / 100;
		}
		else
		{
			discount = price *10 / 100;
		}
		
	}
	else
	{
		if(student=='n')
	{
		if(price>=600)
		{
			discount = price * 15 / 100;
		}
		else
		{
			discount = 0;
		}
		
	}	
	}
	tprice=price-discount;
	 printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", tprice);
}