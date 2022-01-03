
main()
{
	char str[10],str2[10];
	int i;
	
	printf("enter the string");
		gets(str);
		
	printf("enter the string2");
		gets(str2);
		
	i=strcmp(str2,str);
	if(i==0)
	printf("\nstrings are same");
	else
	printf("\nstring are diff");
}
