main()
{
	char str[20],str2[20];
	int i;
	
	printf("\n enter the string");
		gets(str);
		
	strcpy(str2,str);
	
	strrev(str2);
	i=strcmp(str,str2);
		if(i==0)
			printf("\n string are palindrom");
		else
			printf("\n string are not");
}
