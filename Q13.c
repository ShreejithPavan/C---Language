#include<stdio.h>
int main()
{
	int c = 0,count=0;
	while (c < 20)
	{
		c += 2;
		count++;
	}
	printf("The Loop executed %d times",count);
	return 0;
}
