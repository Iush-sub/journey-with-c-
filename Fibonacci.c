#include<stdio.h>
int fibo(int);
int main()
{
	int n,i;
	printf("type n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d \t",fibo(i));
	}
	return 0;
}
int fibo(int a)
{
	if(a==0 || a==1)
	{
		return 1;
	}
	else return fibo(a-1)+fibo(a-2);
}