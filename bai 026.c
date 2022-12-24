#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ngaytrongthang(int ngay,int thang,int nam){
	switch (thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return ngay=((nam%400==0) || (nam%40==0) || (nam%100!=0))?29:28;
		
	}	
	
}
void ngaytieptheo (int ngay,int thang,int nam){
	int nct=ngaytrongthang(ngay,thang,nam);
	if(ngay==nct){
		if(thang==12){
			ngay=1;
			thang=1;
			nam++;
		}
	
	else {
		ngay=1;
		thang++;
	}
}
	else {
		ngay++;
	}
	printf("\nngay tiep theo la: %d:%d:%d",ngay,thang,nam);
}
void ngaytruocdo (int ngay,int thang,int nam){
	int nct=ngaytrongthang(ngay,thang,nam);
	if(ngay==1){
		if(thang==1){
			ngay=nct;
			thang=12;
			nam--;
		}
	
	else {
		ngay=nct;
		thang--;
	}
}
	else {
		ngay--;
	}
	printf("\nngay truoc do  la: %d:%d:%d",ngay,thang,nam);
}
int main(int argc, char *argv[]) {
	int ngay,thang,nam;
	printf("\n hay nhap ngay thang va nam: ");
	scanf("%d%d%d",&ngay,&thang,&nam);
if(ngay<1 || ngay>32 || thang<1 || thang>13 || nam<1){
	printf("\nkhong hop he");
}
else {
	printf ("\n ngay thang nam cua hien tai: %d:%d:%d",ngay,thang,nam);
}	
	ngaytieptheo(ngay,thang,nam);	
	ngaytruocdo(ngay,thang,nam);
	return 0;
}
	
	
	
	
	
	
	
	

