#include<stdio.h>
struct time{
	int hh;
	int mm;
	int ss;
};
void main(){
	struct time t[3];
	int i;
	printf("Add 2 Times hh:mm:ss\n\n");
	for(i=0;i<2;i++){
		printf("Time %d",i+1);
		printf("\nIn hours: ");
		scanf("%d",&t[i].hh);
		printf("In minutes: ");
		scanf("%d",&t[i].mm);
		printf("In seconds: ");
		scanf("%d",&t[i].ss);
		printf("\n");
	}
	printf("Time 1 -> %d:%d:%d\n",t[0].hh,t[0].mm,t[0].ss);
	printf("Time 2 -> %d:%d:%d\n",t[1].hh,t[1].mm,t[1].ss);
	t[2].hh=t[0].hh+t[1].hh;
	t[2].mm=t[0].mm+t[1].mm;
	t[2].ss=t[0].ss+t[1].ss;
	if(t[2].ss>=60){
		t[2].ss%=60;
		t[2].mm+=1;
	}
	if(t[2].mm>=60){
		t[2].mm%=60;
		t[2].hh+=1;
	}
	printf("Addition -> %d:%d:%d",t[2].hh,t[2].mm,t[2].ss);
}
