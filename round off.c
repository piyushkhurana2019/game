main()
{	void end();
	float i,a,temp,num;
	printf("ener th numbr");
	scanf("%f",&num);
	
	for(i=0.0; i=i+1.0; i<=num+1.0)
	{
		if(num<i)
		{
			a=i-num;                //so that sirf decimal k baad vaale no. hi bache
			a=a*10;                //assuming that decimal k baad sirf ek digit h
			int a;
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

