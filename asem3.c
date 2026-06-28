#include<stdio.h>
//palindrom
int fun(int);
int main()
{
	int a;
	printf("type a number ");
	scanf("%d",&a);
	if(fun(a)==a)
	{
		printf("%d is a palindrom",a);
	}
	else printf("%d is not a palindrom",a);
	return 0;
}
int fun(int n)
{
	int a,r;
	while(n!=0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	return r;
}