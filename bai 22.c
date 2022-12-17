#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int k,tien;
	int gia1=950,gia2=1250,gia3=1350,gia4=1550;
	printf("\n hay nhap so Kwh : ");
	scanf("%d",&k);
	if(k<=100){
	tien=k*gia1;
		printf("\ntien dien la: %d",tien);
	}
	if(k>=101 && k<=150){
			tien=100*gia1 +(k-100)*gia2;
				printf("\ntien dien la: %d",tien);
	}
	if(k>151 && k<200){
			tien=100*gia1 +50*gia2+(k-150)*gia3;
				printf("\ntien dien la: %d",tien);
	}
	if(k>201){
		tien=100*gia1 +50*gia2+50*gia3+(k-150)*gia3;
			printf("\ntien dien la: %d",tien);
}
	
	
	
	
	
	
	
	
	return 0;
}
