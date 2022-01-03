
main()
{
	char str[20];
	int i=0,noc=0,nos=0,now=0;
	
	printf("enter the array");
		gets(str);
		
		while(str[i]!='\0')
		{
			noc++;
			if(str[i]==' ')
			{
				nos++;
			}
			i++;
		}
		now=nos+1;
		
		printf("\nno. of space=%d \nno. of words=%d\n no. of characters=%d",nos,now,noc);
}
