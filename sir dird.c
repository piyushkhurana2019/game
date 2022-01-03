main()
{
	float i,a,temp,num;
	printf("ener th numbr");
	scanf("%f",&num);
	
	for(i=0.0; i++; i<=10000.0)
	{
		if(num<i)
		{
			a=i-num;                //so that sirf decimal k baad vaale no. hi bache
			a=a*10;
			int a;
			if(a<10)            //to check that decimal k baad ek digit h ya do
			{	
				if(a<5)
				{
					num=i-1;
				}
				else
				{
					num=i;
				}
				printf("%f",num);
			}
			
			else
			{	a=a*10;
				temp=a/10;               //taaki a ki sirf phli digit temp m aaye
					if(temp<5)
				{
					num=i-1;
				}
			else if(temp>5)
				{
					num=i;
				}
			else
			{                              // =5
				a=a%10;                   // a ki baad vaali digit i.e. 2nd
					
					if(a<5)
				{
					num=i-1;
				}
				else
				{
					num=i;
				}
				printf("%f",num);
			}
			
			
		}
	}
	else
	printf("hii");
	
}

}
