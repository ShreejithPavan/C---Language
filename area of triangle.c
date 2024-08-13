#include<stdio.h>
int main()
{
	int area,height,breadth;
	
	printf("Enter the height: ");
	scanf("%d",&height);
	printf("Enter the breadth : ");
	scanf("%d",&breadth);
	
	area=0.5*height*breadth;
	
	printf("Area of Triangle: %d\n",area);
	
	return 0;
}
