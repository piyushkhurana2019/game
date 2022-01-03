main()
{
	int a[10],i;
	int big;
	
	printf("enter thr value i array");
		for(i=0 ; i<=9 ; i++)
		   scanf("%d",&a[i]);
		   
	big=findbig(a);
		printf("\n largest element is=%d",big);
}
int findbig(int arr[])
{
	int i,big;
	big=arr[0];
	
		for(i=1 ; i<=9 ; i++)
		{
			if(arr[i]>big)
				big=arr[i];
		}
		return big;
}
