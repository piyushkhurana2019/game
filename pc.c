
		main()
		{
			int num,i,x;
			
			printf("\n enter the number=");
				scanf("%d",&num);
				
				i=1;
				while(i<=10)
				{
					x=pow(i,3);
					if(x==num)
					{
						printf("\n number is perfect cube of=%d",i);
						break;
					}
					else
					{
						if(x>num)
						{
							printf("\n not");
							break;
						}
						else
						{
							i++;
						}
					}
					
				}
			
		}
