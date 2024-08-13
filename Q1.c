#include<stdio.h>
int main()
{
	int T,A,PD;
	float pp,PP;
	printf("Enter the total no. of days: ");
	scanf("%d",&T);
	printf("Enter the total no. of Absent: ");
	scanf("%d",&A);
	
	PD=T-A;
	printf("The present days: %d\n",PD);
	
	pp=PD;
	PP=((pp/T)*100);
	printf("Present Percentage=%f\n",PP);
	
	if(PP<75)
	{
		printf("The student is not eligible to attend the exam!\n");
	}
	else
	{
		printf("The student is eligible to attend the exam!\n");
	}
	return 0;
}
