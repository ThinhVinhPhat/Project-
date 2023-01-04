#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hinh1(int h,int i,int j){
for(i=1;i<=h;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}	
			printf("\n");
	}
}
void hinh2(int h,int i,int j){
	for(i=1;i<=h;i++){
		for(j=1;j<i+1;j++){
			printf(" ");
		}
		for(j=0;j<h-i;j++){
			printf("*");
		}
		printf("\n");
	}
}
void hinh3(int h,int i,int j){
		for(i=0;i<h;i++){
		for(j=0;j<h;j++){
			if(j==0 || i==h-1 || i==j ){
				printf("*");
			}	  
			else {
				printf(" ");
			}	

		}
		printf("\n");
	}
	
}
void hinh4(int h,int i,int j){
	for(i=0;i<h-i;i++){
		for(j=0;j<h;j++){
			printf("*");
		}
		
		printf("\n");
	}
}
void hinh5(int h,int i,int j){
	for(i=0;i<=h-i;i++){
		for(j=0;j<=h;j++){
		if(i==0 ||i==h || j==0 || j==h || i==h/2){
			printf("*");
		}
		else{
			printf(" ");
		}
		}
		
		printf("\n");
	}
}
void hinh6(int h,int i,int j,int k){
	for(i=1;i<=h;i++){
		for(j=1;j<=h-i;j++){
			printf(" ");
		}	
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		for(j=1;j<=h-i;j++){
			printf(" ");
		}			
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
	int h,i,j,k;
	printf("\n hay nhap chieu cao h: ");
	scanf("%d",&h);
	hinh1(h,i,j);
	printf("\n");
	hinh2(h,i,j);
	printf("\n");
	hinh3(h,i,j);
	printf("\n");
	hinh4(h,i,j);
	printf("\n");
	hinh5(h,i,j);
	printf("\n");
	hinh6(h,i,j,k);
	return 0;
}
