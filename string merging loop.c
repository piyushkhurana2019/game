
main()
{
	char str[10],str2[10];
	int i,j=0;
	
	printf("enter the string1");
		gets(str);
		
	printf("enter the sring2");
		gets(str2);
		
		i=strlen(str);
		
		
		while(str2[j]!='\0')
		{
			str[i]=str2[j];
			i++;
			j++;
		}
	str[i]='\0';
	puts(str);
	
}
