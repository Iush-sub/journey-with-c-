//string aand array question i must know.
//recursion and loop one last time.
//if possible structure questions.
#include<stdio.h>
int main()//simple sorting array
{
	int a[5],i,j,temp=0;
	printf("type 5 number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;//notice the pattern
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	}
	
	return 0;
}