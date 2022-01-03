
void main()
{
	struct x
	{
		int a;
		float b;
		char c;
	};
	struct x m={101,22.22,'k'};
	struct x *ptr;
	ptr=&m;
	
	printf("%d %f %c",ptr->a,ptr->b,ptr->c);
}
