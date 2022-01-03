
main()
{
	int money,t,h,s,d;
	
	printf("enter the value of money");
	scanf("%d",&money);
	
	// 1075       5          192         275293
	
	t=money/1075;
	printf("\nno. of 1075 rupee notes=%d",t);
	
	money=money%1075;
	h=money/192;
	printf("\nno. of 192 rupee notes=%d",h);
	
	money=money%192;
	s=money/5;
	printf("\nno. of 5 rupee notes=%d",s);
	
	d=money%5;
	printf("\nmoney left=%d",d);
}
