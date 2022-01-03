
main()
{
	int g,num,power,k,choice;
	int fact(int num);
	int powe(int num,int power);
    printf("\n press 1 for factorial and 2 for power");
    scanf("%d",&choice);
    
    if(choice==1)
    {
    	printf("enter the no.");
    	scanf("%d",&num);
    	k=fact(num);
    	printf("factorial=%d",k);
	}
	if(choice==2)
	{
		printf("enter the number and power");
		scanf("%d%d",&num,&power);
		g=powe(num,power);
		printf("power=%d",g);
	}
}
	int fact(int num)
	{
		int k=1;
		while(num>=1)
		{
			k=num*k;
			num=num-1;
		}
		return k;
	}
	
	int powe(int num,int power)
	{
		int i=1,k=1;
		while(i<=power)
		{
			k=num*k;
			i++;
		}
		return k;
		
	}

