#include<stdio.h>
int arm(int,int);
int main()
{
	int a;
	printf("type a number");
	scanf("%d",&a);
	int s=arm(a,0);
	if(s==a)
	{
		printf("armstrong");
	}
	else printf("not armstrong");
	return 0;

}
int arm(int a,int s)
{
	int d;
	if (a==0)
	{
		return;
	}
	else 
	d =a%10;
	s=s+d*d*d;
	return arm(a/10,s);
	
}