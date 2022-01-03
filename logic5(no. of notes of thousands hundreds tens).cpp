main()
{
	int money,t,h,ten;
	
	printf("put the value of money");
	scanf("%d",&money);
	
	t=money/1000;
	
	money=money%1000;
	h=money/100;
	
	money=money%100;
	ten=money/10;
	
	printf("%d",t);
	printf("%d",h);
	printf("%d",ten);
}
