#include<stdio.h>

main()
{
	struct x
	{
		int a;
		float b;
		char c;
	};
	struct x m[3];
	int i;
	
	for(i=0; i<=2; i++)
	{
		printf("\nenter the value instructure variable");
			scanf("%d",&m[i].a);
			fflush(stdin);
			scanf("%f",&m[i].b);
			fflush(stdin);
			scanf("%c",&m[i].c);
	}
	
	printf("\n structure is=");
	printf("\n ek baar fir aapa khichya sangeet\n");
		for(i=0; i<=2; i++)
		{
			printf("\n %d %f %c",m[i].a,m[i].b,m[i].c);
		}
}
