main()
{
	int i,k=1,m,num;
	
	printf("enter the num");
	scanf("%d",&num);
	
	m=fact(num,k);
	printf("\n factorial=%d",m);
}

fact(int num,int k)
{    
	if(num==0)
		return k;
	else
		{
			k=num*k;
			num--;
			fact(num,k);
		}
}
