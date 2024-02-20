#include<stdio.h>
struct distance{
	int feet;
	int inch;
};
void main(){
	int i;
	struct distance d[3];
	printf("Add 2 Distances in feet and inches\n");
	for(i=0;i<2;i++){
		printf("\nDistance %d",i+1);
		printf("\nIn feet: ");
		scanf("%d",&d[i].feet);
		printf("In inches: ");
		scanf("%d",&d[i].inch);
	}
	d[2].feet=d[0].feet+d[1].feet;
	d[2].inch=d[0].inch+d[1].inch;
	if((d[2].inch)>=12){
		d[2].inch%=12;
		d[2].feet+=1;
	}
	printf("\nDistance 1: %d feet %d inches",d[0].feet,d[0].inch);
	printf("\nDistance 2: %d feet %d inches",d[1].feet,d[1].inch);
	printf("\nAddition: ");
	printf("%d feet %d inches",d[2].feet,d[2].inch);
}
