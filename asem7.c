//revsion                                   * * * * *
//                                            * * *  
//                                              * our pattern
//
//
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)// space
	{
		for(j=0;j<5-i;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	for(i=0;i<5;i++)// star
	{
		for(j=0;j<2*5-1;j++)
		{
			printf("*");
		}
	   printf("\n");
	}
	return 0;
}







