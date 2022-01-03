
	int fib(int a,int b)
	{
		int sum,count;
		sum=a+b;
		fun(b,sum);
		count++;
		if(count==10)
		return;
	}
main()
{
	int a=0,b=1;
	
	fib(a,b);
}

