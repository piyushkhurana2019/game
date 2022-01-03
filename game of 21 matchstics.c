main()
{
	int ms=21,p1,p2;
	
  printf("------------------------------------------");
  printf("\n\n\n");
  printf("              The Game Begins             ");
  printf("\n\n\n");
  printf("------------------------------------------");
	again:
	
	printf("\n enter the matchstics choosen by player 1 :- \n");
	scanf("%d",&p1);
	
	if(p1<0||p1>3)
	{
	printf("try again");
	goto again;
	}
	else
	{
		ms=ms-p1;
		if(ms<=0)
		{
			printf("player 1 lost the match \n");
		}
		else
		{
			second:
			
			printf("\nenter the matchstics choosen by player 2 :- \n");
			scanf("%d",&p2);
			if(p2<0||p2>3)
			{
				printf("\ntry again");
				goto second;
			}
			 ms=ms-p2;
			 if(ms<=0)
			 {
				 printf("\nplayer2 lost the match \n");
			}
			else
			goto again;


		}
	}

}
