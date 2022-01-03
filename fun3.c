float fun(float x,float y);          //prototype declaration 
	void sum(float m);              //global declaration 
main()
{
		float i,j,k;
		
		printf("\n enter the i & j");
			scanf("%f%f",&i,&j);
			
			k=fun(i,j);
		printf("\n sum=%f",k);			
}

		float fun(float x, float y)
		{
				float z;
				
				z=x+y;
				  sum(z);
				return z;
		}
		   void sum(float m)
		   {
		   	    printf("\n m=%f",m);
		   }

