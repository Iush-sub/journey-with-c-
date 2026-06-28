#include<stdio.h>
int reve(int);
int main()
{
	int a;
	printf("type a number ");
	scanf("%d",&a);
	printf("%d is the reverse ",reve(a));
	return 0;
}
int reve(int n)
{
	int s,d;
	while(n!=0)
	{
		d=n%10;
		s=s*10+d;
		n=n/10;
	}
	return s;
}