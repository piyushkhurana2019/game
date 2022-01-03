main()
{
	struct x
	{
		int a;
		float b;
	};
	
	struct y
	{
		char c;
		struct x k;
	};
	
	struct y m;
	m.c='f';
	m.k.a=10;
	m.k.b=1.2;
	
	
	printf("%c %d %f",m.c,m.k.a,m.k.b);
}
