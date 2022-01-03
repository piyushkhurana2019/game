 
main()
{
	int a=0,b=1,sum;
	
		fib(a,b);
}

int fib(int a,int b)
{	
	int sum;	
	sum=a+b;
	printf("%d",sum);
	fib(b,sum);
	if(sum>100)
	return sum;
		
}
