
main()
{
	int x[3][3],z[3][3],i,j,y[3][3],p[3][3];
	printf("enter the values in array1");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	
	for(i=0;i<=2;i++)
	{printf("\n");
		for(j=0;j<=2;j++)
		{
			printf(" %d",x[i][j]);
		}
	}
	printf("enter the values in array2");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	
	for(i=0;i<=2;i++)
	{printf("\n");
		for(j=0;j<=2;j++)
		{	
			printf(" %d",y[i][j]);
		}
	}

	i=0;
	j=0;
	
p[i][j]=(x[i][j]*y[j][i])+(x[i][j+1]*y[j][i+1])+(x[i][j+2]*y[j][i+2]);

p[i][j+1]=(x[i][j]*y[j+1][i])+(x[i][j+1]*y[j+1][i+1])+(x[i][j+2]*y[j+1][i+2]);		

p[i][j+2]=(x[i][j]*y[j+2][i])+(x[i][j+1]*y[j+2][i+1])+(x[i][j+2]*y[j+2][i+2]);

p[i+1][j]=(x[i][j]*y[j][i])+(x[i][j+1]*y[j][i+1])+(x[i][j+2]*y[j][i+2]);

p[i+1][j+1]=(x[i][j]*y[j+1][i])+(x[i][j+1]*y[j+1][i+1])+(x[i][j+2]*y[j+1][i+2]);

p[i+1][j+2]=(x[i][j]*y[j+2][i])+(x[i][j+1]*y[j+2][i+1])+(x[i][j+2]*y[j+2][i+2]);

p[i+2][j]=(x[i][j]*y[j][i])+(x[i][j+1]*y[j][i+1])+(x[i][j+2]*y[j][i+2]);

p[i+2][j+1]=(x[i][j]*y[j+1][i])+(x[i][j+1]*y[j+1][i+1])+(x[i][j+2]*y[j+1][i+2]);		

p[i+2][j+2]=(x[i][j]*y[j+2][i])+(x[i][j+1]*y[j+2][i+1])+(x[i][j+2]*y[j+2][i+2]);

for(i=0;i<=2;i++)
{printf("\n");
	for(j=0;j<=2;j++)
	{
		printf(" %d",p[i][j]);
	}
}

}
