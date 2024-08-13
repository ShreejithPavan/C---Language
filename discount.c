#include<stdio.h>
int main()
{
	int cost;
	printf("The cost of shopping:");
    scanf("%d",&cost);
    
    if (cost>=5000 && cost<10000)
    {
    	printf("The discounted price =%f\n The actual ammount= %f\n",(cost*0.05),(cost-(cost*0.05)));
	}
	else if(cost>=10000 && cost<15000)
	{
		printf("the discounted price =%f\n The actual ammount= %f\n",(cost*0.1),(cost-(cost*0.1)));
	}
	else if (cost>=15000)
	{
		printf("the discounted price =%f\n The actual ammount= %f\n",(cost*0.15),(cost-(cost*0.15)));
	}
	else
	{
		printf("no value!");
	}
	return 0;
}
