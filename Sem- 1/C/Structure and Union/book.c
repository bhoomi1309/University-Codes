#include<stdio.h>
struct book{
	char title[100];
	char author[100];
	int publication;
	float price;
};
void main(){
	struct book b[3];
	int i;
	printf("Enter Details of 3 Books\n\n");
	for(i=0;i<3;i++){
		printf("Book %d\n",i+1);
		printf("Book Title: ");
		scanf("%s",&b[i].title);
		printf("Author Name: ");
		scanf("%s",&b[i].author);
		printf("Publication Year: ");
		scanf("%d",&b[i].publication);
		printf("Price: ");
		scanf("%f",&b[i].price);
		printf("\n");
	}
	printf("Book Details\n\n");
	printf("No.\tTitle\tAuthor\tPublication\tPrice\n");
	for(i=0;i<3;i++){
		printf("%d\t%s\t%s\t%d\t\t%f\n",i+1,b[i].title,b[i].author,b[i].publication,b[i].price);
	}
}
