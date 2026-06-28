//fibonachi
#include<stdio.h>
int fibo(int);
int main()
{
	int n,i;
	printf("type a nth condition");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",fibo(i));
	}
	return 0;
}
int fibo(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else return fibo(n-2)+fibo(n-1);
}