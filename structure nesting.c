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
	m.c='h';
	m.k.a=10;
	m.k.b=1.2;
}
