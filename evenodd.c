#include<stdio.h>
int eveodd(int);
int main()
{
	int a;
	printf("type a number");
	scanf("%d",&a);
	if(eveodd(a)==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
int eveodd(int a)
{
	if(a==0)
	{
		return 0;
	}
	else if (a==1)
	{
		return 1;
	}
	else 
	return eveodd(a-2);
}