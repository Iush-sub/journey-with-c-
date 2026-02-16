#include<stdio.h>
int pow(int,int);
int main()
{
	int b,p;
	printf("type a base and power");
	scanf("%d%d",&b,&p);
	printf("power is %d",pow(b,p));
	return 0;
}
int pow(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	else return a*pow(a,b-1);
}