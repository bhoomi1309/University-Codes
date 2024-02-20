#include<stdio.h>
struct structure{
    char string[10];
	int integer;
	float float_value;
}; 
union unionn{
	char string[10];
	int integer;
	float float_value;
};
void main(){
	struct structure s;
	union unionn u;
	printf("Difference between Structure and Union\n\nStorage Space:\n");
	printf("Structure: %d\n",sizeof(s));
	printf("Union: %d\n",sizeof(u));
	printf("\nAccessing Variable at a time: \n");
	printf("Structure: \n");
	printf("String: ");
	scanf("%s",&s.string);
	printf("Integer: ");
	scanf("%d",&s.integer);
	printf("Float: ");
	scanf("%f",&s.float_value);
	printf("\nUnion: \n");
	printf("String: ");
	scanf("%s",&u.string);
	printf("Integer: ");
	scanf("%d",&u.integer);
	printf("Float: ");
	scanf("%f",&u.float_value);
	printf("\nStructure: %s %d %f\n",s.string,s.integer,s.float_value);
	printf("Union: %s %d %f",u.string,u.integer,u.float_value);
}
