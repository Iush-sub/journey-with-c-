//power
#include<stdio.h>
int pow(int,int);
int main()
{
	int p,b;
	printf("type power and base");
	scanf("%d%d",&p,&b);
	printf("%d is the answer",pow(p,b));
	return 0;
}
int pow(int p,int b)
{
	if(b==0)
	{
		return 1;
	}
	else return p*pow(p,b-1);
}