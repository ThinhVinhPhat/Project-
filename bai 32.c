#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tinhtong(int n){
	int q;
	int i;
	for(i=1;i<=n;i++){
	q+=i;
	}
		printf("\n tong tu 1 toi n la: %d",q);	
}
void tinhsochan(int n){
	int p=0;
	int j;
	for(j=0;j<=n;j++){
		if(j%2==0){
	p+=j;
}
	}
		printf("\n tong so chan toi n la: %d",p);	
}
void tinhsochiahetcho3(int n){
	int p=0;
	int j;
	for(j=0;j<=n;j++){
		if(j%3==0){
	p+=j;
}
	}
		printf("\n tong so chia het cho 3 la: %d",p);	
}
void tongbinhphuong(int n){
	int p=0;
	int j;
	for(j=1;j<=n;j++){
		if(j%2!=0){
	p+=pow(j,2);
}
	}
		printf("\n tong so le binh phuong la: %d",p);	
}

int main(int argc, char *argv[]) {
	int n;
	printf("\n hay nhap n: ");
	scanf("%d",&n);
	tinhtong(n);
	tinhsochan(n);
	tinhsochiahetcho3(n);
	tongbinhphuong(n);
	return 0;
}
