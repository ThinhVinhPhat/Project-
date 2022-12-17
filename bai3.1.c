#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	float dt,p;
	printf("\h hay nhap canh cua tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	p=(a+b+c)/2;
	if(a+b>c || a+c>b || b+c>a){
	dt=sqrt(p*(p-a)*(p-b)*(p-c));
printf("dien tich cua tam giac la: %0.1f",dt);
	}
	else printf("day khong phai la tam giac");
	
	return 0;
}
