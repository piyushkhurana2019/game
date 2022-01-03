main()
{
	int a[10],i,found=0,num;
	printf("put the values in array");
		for(i=0 ; i<=9; i++)
			{
			scanf("%d",&a[i]);
			}
			
			printf("enter the numver u wanna check");
			scanf("%d",&num);
		for(i=0 ; i<=9 ; i++)
		{
			if(num==a[i])
			{
				found=found+1;
			}
		}
		if(found>0)
			printf("\n item is found");
		else
			printf("\n item not found");
		
}
