main()
{
	int a,b,c;
	printf("put the values of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{//  a  c
	if(a>c)
	printf("a is greatest");
	else
	printf("c is greatest");
	}
	else
	// b    c
	{
		if(b>c)
		printf("b is greatest");
		else
		printf("c is greatest");
	}
}
