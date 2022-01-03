
main()
{
	int num,count=0,x,i=0;
	
	printf("enter the number");
	scanf("%d",&num);
	
	while(i<=num)
	{
		i=i+1;
		x=num%i;
		if(x==0)
		count=count+1;
	}
	
	if(count>2)
			printf("number is not prime");
	else
			printf("the number is prime\n%d",num);
	
	
}
