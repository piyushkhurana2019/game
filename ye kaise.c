main()
{
	int a,count,found=0;
	
	printf("guess the no. b/w 1-10 u have 3 chances \n\n");
	
	for(count=0; count<3; count++)
	{
		scanf("%d",&a);
			if(a==4)
				{
					printf("u win");
					break;
				}
			else
				printf("try again\n");
	}
	
}
