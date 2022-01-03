main()
{
	char gen;
	int ms,age;
	
	printf("\n gender=m,f \nmaritalstatus(married=1,unmarried=0) \nage");
	scanf("%c%d%d",&gen,&ms,&age);
	
	if((ms==1)||(ms==0&&gen=='m'&&age>30)||(ms==0&&gen=='f'&&age>25))
	printf("driver is insured");
	else 
	printf("driver is not insured");
}
