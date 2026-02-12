#include<stdio.h>
float dia(float);
float area(float);
float circu(float);
int main()
{
	float a;
	printf("type a number");
	scanf("%f",&a);
	printf("diameter is %f; area is %f; circumference is %f",dia(a),area(a),circu(a));
	return 0;
}
float dia(float a)
{
	return 2*a;
}
float area(float a)
{
	return 3.14*a*a;
}
float circu(float a)
{
	return 2*3.14*a;
}