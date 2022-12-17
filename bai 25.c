#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	printf("\n hay nhap a,b,c,d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d){
		printf("\n A la so lon nhat");
	}
	if(b>a && b>c && b>d){
		printf("\n B la so lon nhat");
	}
	if(c>b && c>a && c>d){
		printf("\n C la so lon nhat");
	}
	if(d>b && d>c && d>a){
		printf("\n D la so lon nhat");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
