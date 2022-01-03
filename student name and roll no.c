#include<stdio.h>
void main()
{
	struct record
	{
		char name[10];
		int roll;
	};
	struct record stud[3];
	int i;
	
	for(i=0; i<=2; i++)
	{
		printf("\nenter the students name and roll no.");
		gets(stud[i].name);
		fflush(stdin);
		scanf("%d",&stud[i].roll);
		fflush(stdin);
	}
	for(i=0; i<=2; i++)
	{
		printf("\n %s %d",stud[i].name,stud[i].roll);
		
	}
}
