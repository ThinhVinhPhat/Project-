#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float diem;
	do{
	printf("\n hay nhap diem TB cua ban: ");
	scanf("%f",&diem);
} while(diem<0 || diem>10);
	if(diem>=9){
		printf("Xuat sac");
}
	if(diem>=8 && diem<9){
		printf("Gioi");
}
	if(diem>=7 && diem<8){
		printf("Kha");
}
	if(diem>=6 && diem<7){
		printf("Trung Binh Kha");
}
	if(diem>=5 && diem<6){
		printf("Trung Binh");
}
	if(diem<5){
		printf("Yeu");
	}
	
	
	
	return 0;
}
