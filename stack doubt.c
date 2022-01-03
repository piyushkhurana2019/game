main()
{
	int a[9],i,j,n,temp;
	
	printf("\n how many elements=");
		scanf("&d",&n);
		
	printf("enter the value in array");
		for(i=0 ; i<=n-1 ; i++)
		 {
		   scanf("%d",&a[i]);
		 }	
		for(i=0 ; i<=n-2 ; i++)
		{
			for(j=0 ; j<=n-2-i ; j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(i=0; i<=n-1; i++)
		printf("l%d",a[i]);
}
