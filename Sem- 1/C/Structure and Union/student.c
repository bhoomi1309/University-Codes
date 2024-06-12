#include<stdio.h>
struct student{
	char name[100];
	int age;
	float percent;
};
void main(){
	struct student s[5];
	int i;
	printf("Enter Details of 5 Students\n\n");
	for(i=0;i<5;i++){
		printf("Student %d:\n",i+1);
		printf("Name: ");
		scanf("%s",&s[i].name);
		printf("Age: ");
		scanf("%d",&s[i].age);
		printf("Percentage: ");
		scanf("%f",&s[i].percent);
		printf("\n");
	}
	printf("Student Details\n\nNo.\tName\tAge\tPercentage\n");
	for(i=0;i<5;i++){
		printf("%d\t%s\t%d\t%f\n",i+1,s[i].name,s[i].age,s[i].percent);
	}
}
