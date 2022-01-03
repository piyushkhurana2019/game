
main()
{
	int num,power,x=1,i;
	
	printf("enter the number and the power");
		scanf("%d%d",&num,&power);
		
	i=1;
	while(i<=power)
	{
		x=num*x;
		i++;
	}
	
	printf("\n power is=%d",x);
}
