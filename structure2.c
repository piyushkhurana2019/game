#include<stdio.h>
main()
{
	struct x
	{
		int a;
		float b;
		char c;
	}m;
	
	scanf("%d",&m.a);
	fflush(stdin);
	
	scanf("%f",&m.b);
	fflush(stdin);
	
	scanf("%c",&m.c);
	
	printf("%d %f %c",m.a,m.b,m.c);
}

