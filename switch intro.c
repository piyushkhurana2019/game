
		int choice,a,b,c;
main()
{
	printf("press 1 for addition & 2 for multiplication");

	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
			printf("\n enter the a and b=");
			scanf("%d%d",&a,&b);
			     c=a+b;
			printf("sum=%d",c);
			break;
	    case 2:
	    	printf("\n enter the value of a and b");
	    	scanf("%d%d",&a,&b);
	    		c=a*b;
	    	printf("multiply=%d",c);
	    	break;
	    default:
	    	printf("\n no match found");
	}
}
