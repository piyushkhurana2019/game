
main()
{	float sum(float x, float y);
	float i,j,k;  
	printf("enter the i and j");
		scanf("%f%f",&i,&j);
		
	k=sum(i,j);
	printf("sum=%f",k); 
}
	 float sum(float x,float y)
		{
			float z;
			z=x+y;
			get(z);
			return z;
		}
		void get(float k)
		{
			printf("\n k=%f",k);
		}
		
