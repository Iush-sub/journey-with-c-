#include<stdio.h>
int pali(int,int);
int main()
{
	int a;
	printf("type a number");
	scanf("%d",&a);
	int s=pali(a,0);
	if(s==a)
	{
		printf("%d is palindrom",a);
	}
	else printf("%d is not palindrom",a);
	return 0;

}
int pali(int a,int s)
{
	int d;
	if (a==0)
	{
		return;
	}
	else 
	d =a%10;
	s=s*10+d;
	return pali(a/10,s);
	
}