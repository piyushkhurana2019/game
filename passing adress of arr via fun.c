	main()
	{
		int a[]={10,20,30,40,50},i;
	
		fun(a);
	}
	fun(int *ptr)
	{
		int i;
			for(i=0 ; i<=4 ; i++,ptr++)
				printf(" %d",*ptr);
	}

