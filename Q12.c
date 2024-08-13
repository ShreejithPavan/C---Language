#include<stdio.h>
int main()
{
	int i;
	for(i=100;i<=500;i++)
	{
		if((i%11==0)&&(i%2!=0))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
