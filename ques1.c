
main()
{
	int basicsal,dearnessallowance,houserent,grosssal;
	
	printf("\n enter the basic salary");
	scanf("%d",&basicsal);
	
	dearnessallowance=40*basicsal/100;
	houserent=20*basicsal/100;
	grosssal=basicsal+dearnessallowance+houserent;
	
	printf("gross salary=%d",grosssal);
	
}
