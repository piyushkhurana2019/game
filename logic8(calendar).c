main()
{
	int x,day;
	
	printf("put the day");
	scanf("%d",&day);
	
	x=day%7;
	
	if(x==1)
	printf("the day is monday");
	else if(x==2)
	printf("the day is tuesday");
	else if(x==3)
	printf("the is wednesday");
	else if(x==4)
	printf("the day is thursday");
	else if(x==5)
	printf("the is friday");
	else if (x==6)
	printf("the day is saturday");
	else
	printf("the day is sunday");

}
