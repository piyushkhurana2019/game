main()
{
	int ms=21,p1,p2,i=1,j=1,choice;
	
	printf(" \npress 1 for starting the game\n");
	printf(" \npress 2 for seeeing game rules\n");
	
	scanf("%d",&choice);
	
	switch(choice)
    {
            case 1:
        {	start :
            printf("------------------------------------------");
            printf("\n\n");
            printf("              The Game Begins             ");
            printf("\n\n");
            printf("------------------------------------------");
                again:
                
                printf("\n enter the matchstics choosen by player 1 :- \n");
                printf("  player 1 :-  turn %d -->",i);
                scanf("%d",&p1);
                i++;
                
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
                        
                        printf(" \nMatchsticks Remaining = %d \n",ms);
                        
                        printf("\nenter the matchstics choosen by player 2 :- \n");
                        printf("  player 2 :-  Turn %d -->",j);
                        scanf("%d",&p2);
                        j++;
                        
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
                        {
                            printf(" \nMatchsticks Remaining = %d \n",ms);
                            goto again;
                        }
            
                    }
                }
                
			case 2:
				{
					printf("\nrules\n");
					goto start;
				}
        }
	}
}
