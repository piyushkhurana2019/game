
main()
{
	char str[10],str2[10];
	int i=0;
	
	printf("enter the vlue in string");
		gets(str);
		
	while(str[i]!=0)
	{
		str2[i]=str[i];
		i++;
	}
	str2[i]='\0';
		puts(str2);
}
