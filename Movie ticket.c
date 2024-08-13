#include<stdio.h>
int main()
{
	int people,a,b,c,d,e,f,g,h,i,j,k,l;
	int amt,timings;
	
	printf("Tickets for : ");
	scanf("%d",&people);
	
	printf("\nWhich city? : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\nYou have chosen Trichy!\n");
			printf("Select the Theatre in Trichy:\n\n\t1.Star Cinemas\n\t2.Mega Cinemas\n\t3.LA Cinemas\n");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("\nStar Cinemas\nplease select the movie\n\t1.Star\n\t2.Garudan\n\t3.Monkey king\n");
					scanf("%d",&c);
					switch(c)
					{
						case 1:
							amt=people*150;
							printf("Star.\nThe movie price is 150rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*200;
							printf("Garudan.\nThe movie price is 200rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*250;
							printf("Monkey king.\nThe movie price is 250rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				case 2:
					printf("Mega Cinemas\nplease select the movie\n\t1.Star\n\t2.Bahubali\n\t3.Joe\n");
					scanf("%d",&d);
					switch(d)
					{
						case 1:
							amt=people*100;
							printf("Star.\nThe movie price is 100rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*150;
							printf("Bahubali.\nThe movie price is 150rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*250;
							printf("Joe.\nThe movie price is 250rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				case 3:
					printf("LA Cinemas\nplease select the movie\n\t1.Manjumel Boys\n\t2.Mahadheera\n\t3.Kayal\n");
					scanf("%d",&e);
					switch(e)
					{
						case 1:
							amt=people*350;
							printf("Manjumel Boys.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*350;
							printf("Mahadheera.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*250;
							printf("Kayal.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				default:
					printf("Invalid !");
					break;
			}
			break;
		case 2:
			printf("\nYou have chosen Thanjavur!\n");
			printf("Select the Theatre in Thanjavur:\n\n\t1.Rani Paradise\n\t2.GV Studios\n\t3.PVR Cinemas\n");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("\nRani Paradise\nplease select the movie\n\t1.Jilla\n\t2.Bairavaa\n\t3.Kaththi\n");
					scanf("%d",&f);
					switch(f)
					{
						case 1:
							amt=people*350;
							printf("Jilla.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*200;
							printf("Bairavaa.\nThe movie price is 200rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*250;
							printf("Kaththi.\nThe movie price is 250rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				case 2:
					printf("GV Studios\nplease select the movie\n\t1.Kavalan\n\t2.Ghilli\n\t3.Billa\n");
					scanf("%d",&g);
					switch(g)
					{
						case 1:
							amt=people*100;
							printf("Kavalan.\nThe movie price is 100rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*150;
							printf("Ghilli.\nThe movie price is 150rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*250;
							printf("Billa.\nThe movie price is 250rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				case 3:
					printf("PVR Cinemas\nplease select the movie\n\t1.Nanban\n\t2.96\n\t3.Raja Rani\n");
					scanf("%d",&h);
					switch(h)
					{
						case 1:
							amt=people*350;
							printf("Nanban.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*350;
							printf("96.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*250;
							printf("Raja Rani.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				default:
					printf("Invalid !");
					break;
			}
			break;
		case 3:
			printf("\nYou have chosen Kovai!\n");
			printf("Select the Theatre in Kovai:\n\n\t1.PVR Cinemas\n\t2.I NOX\n\t3.IMAX\n");
			scanf("%d",&i);
			switch(i)
			{
				case 1:
					printf("\nPVR Cinemas\nplease select the movie\n\t1.Thani Oruvan\n\t2.Sivaji: The Boss\n\t3.Monkey king\n");
					scanf("%d",&j);
					switch(j)
					{
						case 1:
							amt=people*150;
							printf("Thani Oruvan.\nThe movie price is 150rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*200;
							printf("Sivaji: The Boss.\nThe movie price is 200rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*250;
							printf("Nayagan.\nThe movie price is 250rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				case 2:
					printf("I NOX\nplease select the movie\n\t1.The Dark Knight\n\t2.The Lord of the Rings: The Return of the King\n\t3.Inception\n");
					scanf("%d",&k);
					switch(k)
					{
						case 1:
							amt=people*400;
							printf("The Dark Knight.\nThe movie price is 400rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*350;
							printf("The Lord of the Rings: The Return of the King.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*300;
							printf("Inception.\nThe movie price is 300rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=1)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				case 3:
					printf("IMAX\nplease select the movie\n\t1.Interstellar\n\t2.The Pianist\n\t3.Back to the Future\n");
					scanf("%d",&l);
					switch(l)
					{
						case 1:
							amt=people*350;
							printf("Interstellar.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=10)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 2:
							amt=people*350;
							printf("The Pianist.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=12)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
						case 3:
							amt=people*250;
							printf("Back to the Future.\nThe movie price is 350rs/each.\nThe total price is: %d\n",amt);
							printf("The timing : ");
							scanf("%d",&timings);
							if(timings<=10)
							{
								printf("Tickets availabe.");
							}
							else
							{
								printf("Tickets unavailable!");
							}
							break;
					}
					break;
				default:
					printf("Invalid !");
					break;
			}
			break;
	}
	
	return 0;
}
