	
	#include<stdio.h>
	struct x 
	{
		int a;
		float b;
		char c;
	};
	
void main()
{

	struct x m={101,1.1,'j'};
	void fun(struct x);
	fun(m);
}

void fun(struct x z)
{ printf("\n yoyo honey singh naaal diljit");
	printf("%d %f %c",z.a,z.b,z.c);
}
