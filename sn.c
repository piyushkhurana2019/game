main()
{
	int count,a,found=0;
	
	printf("guess the no. b/w 1-10 u have 3 chances \n");
	scanf("%d",&a);
	
	for(count=0; count++; count<3)
	{
		if(a==4)
		found=1;
		else
		printf("try again");
	}

}
