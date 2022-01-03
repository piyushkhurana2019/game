main()
{
	int num,x,y,sum;

printf("enter the value of num");
scanf("%d",&num);

num=num/10;
x=num%10;
num=num/10;
y=num%10;
sum=x+y;

printf("%d",sum);

	
}
