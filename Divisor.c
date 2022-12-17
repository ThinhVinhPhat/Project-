#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf ("\n nhap a: ");
	scanf("%d",&a);
	do{
	
	printf ("\n nhap b: ");
	scanf("%d",&b);
		
	}while(b<0);
	if(a%b==0){
		printf("\nb la so uoc cua a");
	}
	else{
		printf("\n b khong phai la so uoc cua a");
	}
	int c;
	printf("\n hay nhap c: ");
	scanf("%d",&c);
	int d;
	int e;
	do{
	
	printf("\n hay khoang A: ");
	scanf("%d",&d);
	printf("\n hay nhap B: ");
	scanf("%d",&e);
} while(d>e);
	if(c>=d && c<=e){
		printf("\n c thuoc vao khoang ab");
	}
	else {
		printf("\n c khong thuoc vao khoang ab ");
	}
	char ch;
	printf("\n hay nhap 1 ki tu:");
	scanf(" %c",&ch);
	if(ch>=65 && ch<=90){
		printf("\n %c la chu hoa ",ch);
	}	
	if(ch>=97 && ch<=122){
		printf("\n %c la chu thuong ",ch);
	}
	if (ch >= 48 && ch <= 57){
		printf("\n %c la chu so ",ch);
	}


	
	
	
	
	
	
	
	return 0;
}
