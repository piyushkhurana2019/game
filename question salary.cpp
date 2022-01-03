main()
{
	char gen;
	int yos,qual,salary;
	
	printf("enter the gen=m,f \n yos,\nqual(post graduate=1 graduate=0)");
	scanf("%c%d%d",&gen,&yos,&qual);
	
	if(gen=m&&yos>=10&&qual=1)
	salary=15000;
	else if((gen=m&&yos>=10&&qual=0)||(gen=m&&yos<10&&qual=1)||(gen=f&&yos<10&&qual=1))
	salary=10000;
	else if(gen=m&&yos<10&&qual=0)
	salary=7000;
	else if(gen=f&&yos>=10&&qual=1)
	salary=12000;
	else if(gen=f&&yos>=10&&qual=0)
	salary=9000;
	else if(gen=f&&yos<10&&qual=0)
	salary=6000;
	
	printf("salary=%d",salary);
}
