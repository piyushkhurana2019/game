main()
{
	int days;
	float fine;
	
	printf("put the number of days");
	scanf("%d",&days);
	
	if(days<=5)
	fine=days*0.5;
	else if(days<=10)
	fine=2.5+(days-5)*1;
	else
	fine=7.5+(days-10)*5;
	printf("fine=%f",fine);
}
