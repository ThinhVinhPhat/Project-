#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("\n hay nhap canh cua tam giac");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c || a+c>b || c+b>a ){
		printf("tam giac thuong");
	}
	if(a==b==c){
		printf("tam giac deu");
	}
	if(pow(a,2)+pow(b,2)>pow(c,2) || pow(b,2)+pow(c,2)>pow(a,2) || pow(a,2)+pow(c,2)>pow(b,2) ){
		printf("tam giac vuong");
	}
	if(a+b>c && a+c>b && c+b>a ){
		printf("tam giac can");
	}
	
	
	
	
	
	
	return 0;
}
