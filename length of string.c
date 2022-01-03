
main()
{
	char str[10];
	int count=0,i,j,k;
	
	printf("\n enter the string\n");
		gets(str);
		
		i=0;
			while(str[i]!='\0')
			{
				count=count+1;
				i=i+1;
			}
			
		printf("\n count=%d",count);
}
		

