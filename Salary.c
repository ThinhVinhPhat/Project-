#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ngay;
	int luong;
	printf("\n hay nhap so ngay lam viec cua ban: ");
	scanf("%d",&ngay);
	
	if(ngay>22){
		int ngaythem;
		luong=(ngay + (ngay-ngaythem)*2)*300000;
		printf("\n luong cua ban la: %d",luong);
	}
else {
		luong=ngay*300000;
	printf("\n luong cua ban la: %d",luong);
}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
