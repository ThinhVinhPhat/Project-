#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dt;
	int n;
	float dt2;
	float dt0;
	int i;
	printf("\n hay nhap so lan to: ");
	scanf("%d",&i);
	printf("\n hay nhap dien tich ban dau : ");
	scanf("%d",&dt);
	for(n=1;n<=i;n++){
		dt2=dt*(1/2+1/pow(2,n));
	}
	printf("\n dien tich da to la: %f",dt2);
	dt0=dt2-dt;
	printf("\n dien tich chua to la: %f",dt0);
	return 0;
}
