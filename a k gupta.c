main()
{
	char str[20],str2[20],str3[20];
	int i,k=0,count=0;
	
	printf("\n enter the string=");
	// ashok kumar gupta
	
	gets(str);
	str2[0]=str[0];
	
	for(i=0; i<=19; i++)
	{
		if(str[i]==' ')
		{	k++;
			str2[k]=str[i+1];
			break;	
		}
	}
	strrev(str);
	//str=atpug ramuk kohsa
	i=0;
	while(str[i]!=' ')
	{
		count++;
		i++;
	}
	
	
	for(i=0; i<=count-1; i++)
	{	
		str3[i]=str[i];
	}
	strrev(str3);
	//str3=gupta
	
	for(i=0; i<=count-1; i++)
	{	k++;
		str2[k]=str3[i];
	}
	printf("ans=");
	puts(str2);
	
}
