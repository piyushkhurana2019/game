main()
{
	int i,j,arr1[3][3],arr2[3][3],sum[3][3];
	
	printf("enter the value in array 1");
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				scanf("%d",&arr1[i][j]);
			}
		}
		
		for(i=0;i<=2;i++)
		{printf("\n");
			for(j=0;j<=2;j++)
			{
				printf(" %d",arr1[i][j]);
			}
		}
		
		printf("enter the valu in array 2");
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
		}
	
	for(i=0;i<=2;i++)
		{printf("\n");
			for(j=0;j<=2;j++)
			{
				printf(" %d",arr1[i][j]);
			}
		}
		
		sum[i][j]=arr1[i][j]+arr2[i][j];
		printf("%d",sum);
}
