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

int main(int argc, char *argv[]) {
	int ngay,thang,nam;
	printf("\n hay nhap thang va nam: ");
	scanf("%d%d",&thang,&nam);
if(thang<1 || thang>13 || nam<1){
	printf("\nkhong hop he");
}
else {
	printf ("\n thang %d cua nam %d la: %d",thang,nam, ngaytrongthang(ngay,thang,nam));
}	
		
	return 0;
}
