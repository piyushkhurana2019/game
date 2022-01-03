main()
{
	int i,j,arr[3][3];
	
	printf("enter the value in array");
       for(i=0;i<=2;i++)
	{   	for(j=0;j<=2;j++)
			{
				scanf("%d",&arr[i][j]);
			}
	}
		for(i=0;i<=2;i++)
		{	printf("\n");
			for(j=0;j<=2;j++)
			{
				printf(" %d",arr[i][j]);
			}
		}
}
