main()
{
	int units,bill;
	
	printf("enter the no. of units consumed");
	scanf("%d",&units);
	
	if(units<=2000)
	bill=units*20;
	else if(units<=5000)
	bill=40000+(units-2000)*50;
	else if(units<=15000)
	bill=150000+(units-5000)*100;
	else
	bill=1000000+(units-15000)*200;
	
	printf("bill=%d",bill);
}
