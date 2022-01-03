
main()
{
	char str[20];
	int i,nov=0;
	
	printf("enter the array");
		gets(str);
		
	i=1;
	while(str[i]!='0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			nov=nov+1;
		}
		i++;
	}
	printf("\n no. of vowels =%d",nov);
}
