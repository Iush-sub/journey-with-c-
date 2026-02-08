#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,d;
	printf("type value of a,b,c respectively: ");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<=-1)
	{
		printf("the roots are imaginary");	
	}
	else
	{
	x1=(-b+ sqrt(d))/2*a;
	x2=(-b- sqrt(d))/2*a;
	printf("%.2f is one \n ",x1);
	printf("%.2f is another \n ",x2);
	}
	getch();
	return 0;
}