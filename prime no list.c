
main()
{
	int num=0,count=0,x,i=0;
	
	while(num<100)
	{
	num=num+1;
    
	count=0;
	i=0;
		while(i<=num)
		{	
			
			i=i+1;
			x=num%i;
			if(x==0)
				count=count+1;
		}
				if(count==2)
				printf("\n%d",num);
				
				
}
		
}
