#include<stdio.h>
int cube(int);
int main()
{
	int a;
	printf("type a no: ");
	scanf("%d",&a);
	printf("%d",cube(a));
	return 0;
}
int cube(int z)
{
	return z*z*z;
}