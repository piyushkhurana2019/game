main()
{
	int a[]={10,20,30,40,50},i;
	int b[]={10,20,30,40,50,60,70,80};
	int c[]={10,20,30,40,50,60,70,80,90,100};
	fun(b,8);
}
fun(int *ptr,int size)
{
	int i;
		for(i=0 ; i<=size-1 ; i++,ptr++)
			printf(" %d",*ptr);
}
