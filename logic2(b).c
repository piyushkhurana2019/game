main()
{
	int num,x,y,z,a,sum;
	
	printf("put the value of num");
	scanf("%d",&num);
	
	x=num%10;
	num=num/10;
	y=num%10;
	num=num/10;
	z=num%10;
	a=num/10;
	
	sum=x+y+z+a;
	
	printf("%d",sum);
}
