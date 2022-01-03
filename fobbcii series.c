

main()
{
	int sum,a=0,b=1;
	
	while(sum<100)
	{
		sum=a+b;
		if(sum>100)
		break;
		else
		{
			printf("\n%d",sum);
			a=b;
			b=sum;
		}
	}
}
