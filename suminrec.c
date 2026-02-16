#include<stdio.h>
int sum(int);
int main()
{
	int a;
	printf("type a number");
	scanf("%d",&a);
	printf("sum is %d",sum(a));
	return 0;
}
int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
	else return a+sum(a-1);
}