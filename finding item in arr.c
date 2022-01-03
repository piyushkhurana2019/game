main()
{
	int arr[10],i,found,item;
	
	printf("enter the value of array");
		for(i=0 ; i<=9 ; i++)
			scanf("%d",&arr[i]);
			
	printf("enter the item u wanna find");
		scanf("%d",&item);
		
		for(i=0 ; i<=9 ; i++)
		{
			if(item==arr[i])
				found=found+1;
		}
		if(found>0)
		printf("item found");
		else
		printf("not found");
}
