//armstrong palindrom reverse use of two function and transfer of value form one to another
#include<stdio.h>
int arm(int);
int main()
{
	int n;
	printf("type a number");
	scanf("%d",&n);
	if(arm(n)==n)
	{
		printf("%d is an armstrong number");	
	}
	else printf("%d is not an armstrong number");
	return 0;
}
int arm(int n)
{
	int a,c;
	while(n!=0)
	{
		a=n%10;
		c=c+a*a*a;
		n=n/10;
	}
	return c;
}