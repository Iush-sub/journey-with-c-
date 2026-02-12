#include<stdio.h>
int max_min(int,int);
int main(){
	int a,b;
	printf("type a number");
	scanf("%d%d",&a,&b);
	max_min(a,b);
	return 0;
}
int max_min(int a,int b)
{
	if (a>b)
	{
		printf("%d is maximum and %d is minimum",a,b);
	}
	else printf("%d is maximum and %d is minimum",b,a);
}