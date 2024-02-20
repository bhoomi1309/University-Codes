#include<stdio.h>
struct date{
	int dd;
	int mm;
	int yy;
};
struct employee{
	char name[100];
	struct date birth;
	struct date join;
};
void main(){
	struct employee ee;
	printf("Nested Structure\n");
	printf("Enter Name of employee: ");
	scanf("%s",ee.name);
	printf("Date of Birth-> ");
	printf("Date: ");
	scanf("%d",&ee.birth.dd);
	printf("\t\tMonth: ");
	scanf("%d",&ee.birth.mm);
	printf("\t\tYear: ");
	scanf("%d",&ee.birth.yy);
	printf("Joining Date: ");
	scanf("%d",&ee.join.dd);
	printf("\tMonth: ");
	scanf("%d",&ee.join.mm);
	printf("\tYear: ");
	scanf("%d",&ee.join.yy);
	printf("\nEmployee Name: %s\nDate of Birth: %02d/%02d/%02d\nJoining Date: %02d/%02d/%02d",ee.name,ee.birth.dd,ee.birth.mm,ee.birth.yy,ee.join.dd,ee.join.mm,ee.join.yy);
}
