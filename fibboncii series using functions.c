int count=0,sum=0;
main()
{
	int i=0,j=1;
	
	fib(i,j);	
}

		fib(int x, int y)
		{
		count++;
		   if (count==10)
		   	return;
			sum=x+y;
			printf("\nsum=%d",sum);
			fib(y,sum);
		}

