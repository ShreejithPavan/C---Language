#include<stdio.h>
int main()
{
	int eng,maths,sci,ss;
	printf("The mark in English: ");
	scanf("%d",&eng);
	printf("The mark in Maths: ");
	scanf("%d",&maths);
	printf("The mark in Science: ");
	scanf("%d",&sci);
	printf("The mark in Social Studies: ");
	scanf("%d",&ss);
	
	if(eng>80 && maths>80 && sci>80 && ss>80)
	{
		printf("The course provided is Science Stream.");
	}
	else if(eng>80 && maths>80 && sci>50)
	{
		printf("The course provided is Commerce Stream.");
	}
	else if(eng>80 && ss>80)
	{
		printf("The course provided is Humanities.");
	}
	else 
	{
		printf("invalid!");
	}
	return 0;
}
