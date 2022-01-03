
main()
{
	int num,temp,count=0,x,y,sum=0;
	
	printf("enter the number");
	scanf("%d",&num);
	
	temp=num;
	
	while(num>0)
	{
		count=count+1;
		num=num/10;
	}
	num=temp;
	while(num>0)
	{
	x=num%10;
	y=pow(x,count);
	num=num/10;
	sum=sum+y;
	}
	
	if(sum==temp)
		printf("\nthe no. is armstrong");
		
	else
	    printf("\nthe no is not armstrong");
}
