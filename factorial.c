#include<stdio.h>
int fact(int);
int main()
{
	int a,c;
	printf("type a number");
	scanf("%d",&a);
	c=fact(a);
	printf("factorial is %d",c);
	return 0;
}
int fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	else return a*fact(a-1);
}