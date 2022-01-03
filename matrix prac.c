
main()
{
	int x[3][3],i,j,y[3][3];
	printf("enter the values in array1");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{printf("\n");
			printf("%d",x[i][j]);
		}
	}
	printf("enter the values in array2");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{printf("\n");
			printf("%d",y[i][j]);
		}
	}
}
