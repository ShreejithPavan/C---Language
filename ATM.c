#include<stdio.h>
int main()
{
	int pin=1234,Pin,a;
	long int amount,balance=100000,amt;
	printf("Enter the pin: ");
	scanf("%d",&Pin);
	
	if(pin==Pin)
	{
		printf("Please wait while your transaction is being processed!\n");
		printf("1.Withdraw.\n2.Deposit.\n3.Balance.\n4.Mini Statement.\n\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("Enter the amount: ");
				scanf("%d",&amount);
				balance=balance-amount;
				printf("The available balance is : %d\nThank you for banking with us!",balance);
				break;
			case 2:
				printf("Please provide the amount:\n ");
				scanf("%d",&amt);
				balance=balance+amt;
				printf("The availabe balance is : %d\nThank you for banking with us!",balance);
				break;
			case 3:
				printf("The available Balance is : %d\nThank you for banking with us!",balance);
				break;
			case 4:
				printf("your latest transaction was : %d\nThank you for banking with us!",balance);
				break;
			default:
				printf("Sorry for the Inconvinience!\nThank you for banking with us!");
				break;
		}
	}
	else
	{
		printf("Invalid PIN!");
	}
	
	return 0;
}
