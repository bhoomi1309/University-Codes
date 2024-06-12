#include<stdio.h>
void main(){
	int i;
	printf("ASCII Characters\n");
	printf("ASCII Values ---> Characters\n");
	for(i=0;i<=255;i++){
		printf("   %d ---------------> %c\n",i,i);
	}
}
