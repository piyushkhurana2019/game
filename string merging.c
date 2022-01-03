
main()
{
	char str[20],str2[20];
	
	int i=0;
	
	printf("enyter the value in string 1");
		gets(str);
		
	printf("enter the value in string2");
		gets(str2);
		
	strcat(str,str2);
	puts(str);
}
