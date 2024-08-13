#include<stdio.h>
int main()
{
	int age,ND;
	char sex;
	
	printf("Enter the Age: ");
	scanf("%d",&age);
	printf("Enter the no.of days: ");
	scanf("%d",&ND);
	printf("Enter the Sex (M,F): ");
	scanf(" %c",&sex);
	
	if(age>=18 && age<30)
	{
		if(sex == 'M')
		{
			printf("The wage for men is 700.");
			printf("So wage for the Work:%d",(ND*700));
		}
		else if(sex == 'F')
		{
			printf("The wage for women is 750.");
			printf("So wage for the Work:%d",(ND*750));
		}
		else
		{
			printf("invalid!");
		}
	}
	else if(age>=30 && age<=40)
	{
		if(sex == 'M')
		{
			printf("The wage for men is 800.");
			printf("So wage for the Work:%d",(ND*800));
		}
		else if(sex == 'F')
		{
			printf("The wage for women is 850.");
			printf("So wage for the Work:%d",(ND*850));
		}
		else
		{
			printf("invalid!");
		}
	}
	else
	{
		printf("“Enter appropriate age”");
	}
	return 0;
}
