main()
{
	int money,t,h,ten;
	
	printf("put the value of money");
	scanf("%d",&money);
	
	t=money/1000;
	printf("\nno. of thousands notes=%d",t);
	
	money=money%1000;
	h=money/100;
	printf("\nno. of hundreds notes=%d",h);
	
	money=money%100;
	ten=money/10;
	
	printf("\nno. of ten rupee notes=%d",ten);
}
