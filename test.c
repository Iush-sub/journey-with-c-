#include<stdio.h>       //armstrong*palindroom*contimue*functions*returning funtion to function*factorail
						//fibonachi*power
int recu(int);
int main()
{
	int n,i;
	printf("type base and power");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",recu(i));
	}
	
	return 0;
}
int recu(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else return recu(n-1)+recu(n-2);
}
