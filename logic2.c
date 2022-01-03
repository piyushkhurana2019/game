main()
{
	int num,sum,x,y;
	
	printf("the num=");
	scanf("%d",&num);
	
	x=num%10;
	y=num/1000;
	sum=x+y;
	
	printf("%d",sum);
}
