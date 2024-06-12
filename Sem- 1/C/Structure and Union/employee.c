#include<stdio.h>
struct employee{
	char name[1000];
	int age;
	int salary;
};
void main(){
	struct employee e;
	printf("For an Employee\n");
	printf("Enter Name: ");
	gets(e.name);
	printf("Enter Age: ");
	scanf("%d",&e.age);
	printf("Enter Salary: ");
	scanf("%d",&e.salary);
	printf("Details of an Employee\n");
	printf("Name: %s\n",e.name);
	printf("Age: %d\nSalary: %d",e.age,e.salary);
}
