main()
{
	int x,y,sum=0,z,num,count=0,temp;
		
	
	for(num=1;num<=1000;num++)
	{temp=num;
		while(num>0)
		{
			x=num%10;
			count++;
			num=num%10;
		}
		x=temp;
		while(num>0)
		{
			y=num%10;
			z=pow(y,count);
			sum=sum+z;
			num=num%10;
		}
		if(sum==x)
		printf("\n %d",sum);
		
	}
	
}
