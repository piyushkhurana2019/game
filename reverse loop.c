
main()
{
	int num,sum=0,count=0,x,y,z,c,temp,v;
	
	printf("enter the number");
	scanf("%d",&num);
	
	// 1234
	temp=num;
	while(num>0)
	{
	count=count+1;
	num/=10;
	}
	num=temp;
	
	while(num>0)
	{
	x=num%10;
	z=10;
	c=count-1;
    y=pow(z,c);
	count=count-1;
	x=x*y;
	sum=sum+x;
	num=num/10;
}
	
printf("%d",sum);
v=sum;	

	if(v==temp)
		printf("\nwoo hoo");
}
