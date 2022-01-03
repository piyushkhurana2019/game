main()
{
	int a,b,c,d;
	
	printf("put the value of a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
		
		if(a>b)
	//a     c     d
		     {
			     if(a>c)
		   //a    d
		   {
		   if(a>d)
		   printf("a is greatest");
		   else
		   printf("d is greatest");
		       }
		      else
		//c     d
		{
		if(c>d)
		printf("c is greatest");
		else
		printf("d is greatest");
		}
	
	
}
	
	else
	//b    c     d
	{
	if(b>c)
	// b    d  
	{if(b>d)
	printf("b is greatest");
	else
	printf("d is greatest");
	}
	else
	   //c    d
	{
	if(c>d)
	printf("c is greatest");
	else
	printf("d is greatest");
	}
	
	}
	    
}







