
main()
{
	int count=0,num=10,sum=0,x,y,temp;
	
	
	again:
	while(num<1000)
	{
		num=num+1;
		temp=num;
		count=0;
		while(num>0)
		{
			count=count+1;
			num=num/10;
		}
		num=temp;
		sum=0;
		while(num>0)
		{
				x=num%10;
				y=pow(x,count);
				num=num/10;
				sum=sum+y;
				
			
		}
			if(sum==temp)
					printf("\n%d",sum);
		
		num=temp;
	}
	
	
}
