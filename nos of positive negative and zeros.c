main()
{
	int i,num,nop=0,non=0,noz=0;
	
	while(i)
	{
		printf("\nenter the number");
		scanf("%d",&num);
		
		if(num>0)
		nop=nop+1;
		else if(num<0)
		non=non+1;
		else
		noz=noz+1;
		
		printf("\nfor more press 1,else press 0");
		scanf("%d",&i);
		
	}
	
	printf("\n positive nos.=%d",nop);
	printf("\n negative nos.=%d",non);
	printf("\n zeros=%d",noz);
	
}
