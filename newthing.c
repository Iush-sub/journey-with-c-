#include<stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	FILE*fp;
	fp=fopen("student.dat","w");
	struct student S[2];
	int i;
	printf("type the info as follow \n");
	printf("name rollno marks \n");
	for(i=0;i<=2;i++)
	{
		scanf("%d %s %f",&S[i].roll,S[i].name,&S[i].marks);
		fprintf(fp,"%d %s %f \n",&S[i].roll,S[i].name,&S[i].marks);
	
	}
	fclose(fp);
	return 0;
	
}