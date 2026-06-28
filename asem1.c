#include<stdio.h>// function pahila garne ani paxi aru ma jane.
int fun(int,int);//function declaration
int main()
{
	int a,b;
	printf("type two number");
	scanf("%d%d",&a,&b);
	printf("sum is %d",fun(a,b));// here i call the function i.e execution
	return 0;// not mandatory
}
int fun(int m,int n)// function defination
{
	return m+n;
}//works for anything
