main()
{
	float hours;
	
	printf("enter the no of hours taken by the worker");
	scanf("%f",&hours);
	
	if(hours>=2&&hours<3)
	printf("worker is highly efficient");
	else if(hours>=3&&hours<4)
	printf("worker will have to improve speed");
	else if(hours>=4&&hours<5)
	printf("training will be given to worker");
	else if(hours>=5)
	printf("kick out the worker");
	
}
