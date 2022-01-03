main()
{
	int a[10],i,j,n,temp;
	
	printf("\n how many elements=");
		scanf("%d",&n);
		
	printf("enter the value in array=");
		for(i=0 ; i<=n-1 ; i++)
		  {
		  	scanf("%d",&a[i]);
		  }
		  j=0;
		for(i=0 ; i<=n ; i++)
		{	
			a[i]=a[j];
			j++;
		}
		for(i=0; i<=n; i++)
		{
			for(j=0 ; j<=n-i ; j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(j=0; j<=n; j++)
		printf("\n%d\n",a[j]);
}
