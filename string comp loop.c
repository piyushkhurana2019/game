
main()
{
	char str[10],str2[10];
	int k,i=0;
	
	printf("enter the value in str");
		gets(str);
		
	printf("enter the value in str2");
		gets(str2);
		
	while(str[i]!='\0')
	{
		k=str2[i]-str[i];
		if(k==0)
		i++;
		else
		{
		printf("not same");
		break;
		}
	}
	if(k==0)
	{
		printf("same");
	}
	
}
