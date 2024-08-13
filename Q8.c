#include<stdio.h>
int main()
{
	int km,KM;
	printf("Enter the kilometers covered: ");
	scanf("%d",&km);
	
	if(km<=10)
	{
		KM=km*11;
		printf("The fare for first 10km is 11rs/km.");
		printf("so the fare is %drs.",KM);
	}
	else if(km>10 && km<=90)
	{
		KM=(km*11)+(km*10);
		printf("The fare for next 90km is 10rs/km.");
		printf("so the fare is %drs.",KM);
	}
	else if(km>90)
	{
		KM=(km*11)+(km*10)+(km*9);
		printf("The fare after that is 9rs/km.");
		printf("so the fare is %drs.",KM);
	}
	return 0;
}
