main()
{
	int a,b,c;
	
	printf("put the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{if(c>a)
	printf("a is second greatest");
	else if(b>c)
	printf("b is second greatest");
	else
	printf("c is second greatest");}
	
	
	
	if(b>a)
{
		 if(c>b)
	printf("b is second greatest");
	else if(a>c)
	printf("a is second greatest");
	else
	printf("c is second greatest");}
} 
