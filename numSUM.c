		main()
		{
			int num,x,sum;
			
			sum=0;
			
			printf("Enter the number=");
			   scanf("%d,&num");
				   
				x=num%10;
				sum=sum+x;
				num=num/10;
				
				x=num%10;
				sum=sum+x;
				num=num/10;
				
				x=num%10;
				sum=sum+x;
				num=num/10;
				
				x=num%10;
				sum=sum+x;
				num=num/10;
				
			printf("sum=%d",sum);					
		}
