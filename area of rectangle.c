#include<stdio.h>
int main()
{
	int area,length,breadth;
	
	printf("Enter the length: ");
	scanf("%d",&length);
	printf("Enter the breadth : ");
	scanf("%d",&breadth);
	
	area=length*breadth;
	
	printf("Area of Rectangle: %d\n",area);
	
	return 0;
}
