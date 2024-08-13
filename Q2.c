#include<stdio.h>
int main()
{
	int price;
	
	printf("enter the price: \n");
	scanf("%d",&price);
	
	if(price <=7000)
	{
		printf("Discount is 10%\nThe amount is: %f\n",(price-(price*0.1)));
		printf("The Discount price: %f",(price*0.1));
	}
	else if(price>7000 && price<=10000)
	{
		printf("Discount is 15%\nThe amount is: %f\n",(price-(price*0.15)));
		printf("The Discount price: %f",(price*0.15));
	}
	else if(price>10000)
	{
		printf("Discount is 20%\nThe amount is: %f\n",(price-(price*0.2)));
		printf("The Discount price: %f",(price*0.2));
	}
	else
	{
		printf("not valid payment!");
	}
	return 0;
}
