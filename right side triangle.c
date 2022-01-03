                                              //    1
main()                                        //   12  
{                                             //  123
	int i,j,k;                                // 1234
	                                          //12345
	for(i=1;   i<=5;    i++)                    
	{printf("\n");                            //54321
     	for(k=1;   k<i;   k++)               // 5432
     	{                                     //  543
     		printf(" ");                      //   54
		 }                                    //    5
		 for(j=5;   j>=i;   j--)
		 printf("%d",j);
	}
}
