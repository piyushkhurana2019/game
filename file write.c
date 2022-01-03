#include<stdio.h>
main()
{
	FILE *ptr;
	char str[20];
	int i=0;
	
	printf("enter the string");
		gets(str);
		
	ptr=fopen("piyush.txt","w");
		if(ptr==NULL)
		{
	 		printf("cannot open the file");
			exit(0);
		}
		
		while(str[i]!='\0')
		{
			fputc(str[i],ptr);
			i++;
		}
		fclose(ptr);
}
