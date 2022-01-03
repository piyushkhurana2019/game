
main()
{
	int year,k;
	
	printf("enter the year");
		scanf("%d",&year);
		k=leap(year);
}
void leap(int year)
{
		if(year%4==0)
	printf("%d is a leap year",year);
	else
	printf("not a leap year");
	return ;
}

