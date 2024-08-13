#include<stdio.h>
int main()
{
	int s1,s2,s3;
	
	printf("Enter the Side1: ");
	scanf("%d",&s1);
	printf("Enter the Side2: ");
	scanf("%d",&s2);
	printf("Enter the Side3: ");
	scanf("%d",&s3);
	
	if((s1+s2)>s3)
	{
		printf("The triangle is possible!");
	}
	else if((s2+s3)>s1)
	{
		printf("The triangle is possible!");
	}
	else if((s3+s2)>s1)
	{
		printf("The triangle is possible!");
	}
	else
	{
		printf("The triangle is not possible!");
	}
	return 0;
}
