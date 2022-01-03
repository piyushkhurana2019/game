main()
{
	int sum,x,num;
	printf("put the num");
	scanf("%d",&num);
	
	sum=0;
	x=num%10;
	sum=sum+x*1000;
	
	num=num/10;
	x=num%10;
	sum=sum+x*100;
	
	num=num/10;
	x=num%10;
	sum=sum+x*10;
	
	num=num/10;
	x=num%10;
    sum=sum+x;	
	
	printf("%d",sum);
	}
