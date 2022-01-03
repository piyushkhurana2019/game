
main()
{
	char str[10];
	int i,j,k,count=0;
	
	printf("\n enter the string\n");
		gets(str);
		
		k=length(str);
	printf("%d",k);	
}

int length(char *str)
{
		int count=0;
		while(*str!='\0')
		{
			*str++;
			count++;
		}
		return count;	
}
