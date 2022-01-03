main()
{
	int num,x,sum;
	
	printf("put the num");
	scanf("%d",&num);
	
	sum=0;
	
	x=num/1000;
	sum=sum+(x+1)*1000;
	
	num=num%1000;
	x=num/100;
	sum=sum+(x+1)*100;
	
	num=num%100;
	x=num/10;
	sum=sum+(x+1)*10;
	
	num=num%10;
	x=num%10;
	sum=sum+(x+1);
	
	printf("%d",sum); 
}
