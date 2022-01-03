
main()
{
	int a,b;
	
	a=10,b=20;
	
	fun(&a,&b);
	printf("\ln a=%d b=%d",a,b);
}

fun(int *x,int *y)
{
	x=55;
	y=66;
	printf("\n x=%d y=%d",*x,*y);
}
