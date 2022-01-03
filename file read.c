#include<stdio.h>
main()
{
	char ch;
	FILE *ptr;
	
	ptr=fopen("logic3.c","r");
	if(ptr==NULL)
	{
		printf("\n cant open the file");
			exit(0);
	}
	// after open
		while(1)
		{
			ch=fgetc(ptr);
			if(ch==EOF)
			{
				printf("\n end of file reached");
				break;
			}
			printf("%c",ch);
		}
		fclose(ptr);
}
