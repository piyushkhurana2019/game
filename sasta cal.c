
// how many days and weeks have been passed b/w 1/1/92 to 31/5/92 and days that has noot been counted in weeks

main()
{
	int days=0,weeks=0,null=0;
	char month[10];
	
	printf("enter the day and month");
	scanf("%d%s",&day,&month);
	
	if(month=="jan")
	{
		days=31-day;
		weeks=days/7;
		null=days%7;
	}
}
