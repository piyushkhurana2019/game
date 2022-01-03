main()
{
	int num,x=1;
	
	printf("\n enter the number");
	scanf("%d",&num);
	
	while(num>=1)
     {
     	x=num*x;
     	num--;
	 }
	 
	 printf("\n factorial=%d",x);
}
