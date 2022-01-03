main()
{
	int i,j,arr[i][j];
	
	printf("\n enter the value in array");
		for(i=0 ; i<=2 ; i++)
		{
			for(j=0 ; j<=2 ; j++)
				scanf("%d",&arr[i][j]);
		}
		
	printf("\n value of array is=");
		for(i=0 ; i<=2 ; i++)
		{
			printf("\n");
			  for(j=0 ; j<=2 ; j++)
			     printf(" %d",arr[i][j]);
		}
}
