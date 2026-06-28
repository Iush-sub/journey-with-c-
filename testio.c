#include<stdio.h>
struct std{
	int no;
	char name[20];
	float marks;
};
int main()
{
	FILE*fp;
	fp=fopen("stut.dat","w");
	struct std s[3];
	int i=0;
	printf("type the follows");
	for(i=0;i<3;i++)
	{
		printf("name:");
		scanf("%s",s[i].name);
		printf("roll:");
		scanf("%d",&s[i].no);
		printf("marks:");
		scanf("%f",&s[i].marks);
		fprintf(fp,"%s %d %f",s[i].name,s[i].no,s[i].marks);
	}
	fclose(fp);
	
	return 0;
}
