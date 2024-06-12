#include<stdio.h>
struct student{
	char name[100];
	int age;
	float percent;
};
void main(){
	struct student s,*ptr;
	ptr=&s;
	printf("Structure using Pointer\nEnter name of student: ");
	scanf("%s",ptr->name);
	printf("Enter age: ");
	scanf("%d",&ptr->age);
	printf("Enter percentage: ");
	scanf("%f",&ptr->percent);
	printf("\nStudent Details\nName: %s\nAge: %d\nPercentage: %f",ptr->name,ptr->age,ptr->percent);
}
