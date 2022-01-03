main()
{
	int a,b,c;
	
	printf("put the vaue of 3 nos");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b&&c>a)||(b>a&&a>c))
	printf("a is second largest");
	else if((b>c&&c>a)||(c>b&&b>a))
	printf("c is second greatest");
	else((c>a&&b>c)||(a>c&&c>b))
	printf("c is second greatest");
	
}
