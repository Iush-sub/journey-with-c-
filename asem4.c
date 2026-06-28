//recursion
#include<stdio.h>
int fact(int);//factorial of a number,fibonachi,power,sum,even odd
int main()
{
	int a;
	printf("type a number");
	scanf("%d",&a);
	printf("%d is the factorial",fact(a));
	return 0;
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else return n*fact(n-1);
}