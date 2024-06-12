#include<stdio.h>
int fibbo(int n,int a,int b,int arr[]);
void main(){
	int a=0,b=1,n,i;
	printf("Fibonacci Series");
	printf("\nEnter no. of elements to print in series: ");
	scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr=fibbo(n,a,b,arr);
	printf("Series: ");
	for(i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
}
int fibbo(int n,int a,int b,int arr[]){
	int i;
	arr[0]=a;
	arr[1]=b;
	for(i=2;i<n;i++){
		arr[i]=a+b;
		a=b;
		b=arr[i];
	}
	return arr;
}
