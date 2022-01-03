
main()
{
	int i,j,k,big;
	
	printf("\n enter the value of i,j,k");
	scanf("%d%d%d",&i,&j,&k);
	
	big = i>j ? (i>k?i:k) : j>k?j:k ;
	printf("%d",big);
}
