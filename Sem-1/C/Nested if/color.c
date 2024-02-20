#include<stdio.h>
void main(){
	printf("Color: RGB -> CMYK");
	float red,green,blue;
	float aa,bb,cc,w;
	printf("\nEnter color in RGB format: ");
	printf("\n[Integer scale from 0 to 255]");
	printf("\n\tRed(R): ");
	scanf("%f",&red);
	printf("\tGreen(G): ");
	scanf("%f",&green);
	printf("\tBlue(B): ");
	scanf("%f",&blue);
	aa=red/255;
	bb=green/255;
	cc=blue/255;
	if(aa>bb){
		if(aa>cc){
			w=aa;
		}
		else{
			w=cc;
		}
	}
	else{
		if(bb>cc){
			w=bb;
		}
		else{
			w=cc;
		}
	}
	float cyan,magenta,yellow,black;
	cyan=(w-aa)/w;
	magenta=(w-bb)/w;
	yellow=(w-cc)/w;
	black=1.00-w;
	printf("\nColors in CMYK format: ");
	printf("\nCyan(C): %f",cyan);
	printf("\nMagenta(M): %f",magenta);
	printf("\nYellow(Y): %f",yellow);
	printf("\nBlack(K): %f",black);
}
