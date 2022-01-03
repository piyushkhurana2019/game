main()
{
	int a,b;
	printf("put the value of a");
	scanf("%d",&a);
	printf("put the value of b");
	scanf("%d",&b);
	
	b=b-a;
	a=a+b;
	b=a-b;
	
	printf("a=%d",a);
	printf("b=%d",b);
}
