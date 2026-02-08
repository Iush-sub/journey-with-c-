#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(j<=i)
			{
				printf("*");
			}
			else printf(" ");
		}
	printf("\n");
	} 
	return 0;
}