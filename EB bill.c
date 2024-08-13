#include<stdio.h>
int main()
{
	int units;
	
	printf("Enter the unit: ");
	scanf("%d",&units);
	
	if(units>=0 && units<100)
	{
		printf("The price of useage: %d rs\n no payment!",(units*0));
	}
	else if(units>=100 && units<200)
	{
		printf("The price of useage: %d rs\n each unit 2rs",(units*2));
	}
	else if(units>=200 && units<300)
	{
		printf("The price of useage: %d rs\n each unit 5rs",(units*5));
	}
	else if(units>=300 && units<400)
	{
		printf("The price of useage: %d rs\n each unit 8rs",(units*8));
	}
	else if(units>=400)
	{
		printf("The price of useage: %d rs\n each unit 10rs",(units*10));
	}
	else
	{
		printf("No value!");
	}
	return 0;
}
