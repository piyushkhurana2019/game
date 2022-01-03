
// two variable having some values , interchange their values without the use of 3rd variable

main()
{
	printf("enter the values of a and b");
	int a,b;
	scanf("%d%d",&a,&b);
	
	b=b-a;
	a=a+b;
	b=a-b;
	
	printf("%d\n%d",a,b);
	
	
	
	
}
