#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[80];
	float cgpa;
};
int main()
{
	struct student s1;
	printf("enter ur roll,cgpa,name\n");
	scanf("%d",&s1.roll);
    scanf("%f",&s1.cgpa);
    scanf("%s",&s1.name);
    printf("roll=%d\nname=%s\ncgpa=%f",s1.roll,s1.name,s1.cgpa);
    return 0;
}
