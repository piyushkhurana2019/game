void fun(int a,float b,char c);

main()
{
	struct x
	{
		int a;
		float b;
		char c;
	};
	struct x m={101,22.22,'k'};
		
		fun(m.a,m.b,m.c);
		
}

void fun(int a,float b,char c)
	{
		printf("%d %f %c",a,b,c);
	}
