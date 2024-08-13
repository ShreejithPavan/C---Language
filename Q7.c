#include<stdio.h>
int main()
{
	int ND;
	
	printf("Enter thr no.of Days: ");
	scanf("%d",&ND);
	
	if(ND<=5)
	{
		printf("The amount is 2/day.\n");
		printf("The fee:%d",(ND*2));
	}
	else if(ND<=10 && ND>=6)
	{
		printf("The amount is 3/day.\n");
		printf("The fee:%d",(ND*3));
	}
	else if(ND<=15 && ND>=11)
	{
		printf("The amount is 4/day.\n");
		printf("The fee:%d",(ND*4));
	}
	else if(ND<15)
	{
		printf("The amount is 5/day.\n");
		printf("The fee:%d",(ND*5));
	}
	else
	{
		printf("not valid");
	}
	return 0;
}
