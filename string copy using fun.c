
main()
{
	char str[10],str2[10];
	int i=0,k;
	
	printf("enter the string");
	
	gets(str);
	k=copy(str,str2);
	printf("%d",k);
}

copy(char *s,char*t)
{
	while(*s!='0')
	{
	*t=*s;
	s++;
	t++;
	}
	*t='\0';
}
