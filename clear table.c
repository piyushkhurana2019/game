
main()
{
	int i,j,num;
	printf("\nentr the number=");
	scanf("%d",&num);
	i=1;
	while(i<=10)
	{
		j=num*i;
		printf("\n %d*%d=%d",num,i,j);
		i=i+1;
	}
}
