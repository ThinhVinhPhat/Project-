#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int songaytrongthang (int thang,int nam){
		switch (thang){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			return 31;	
		}	
	switch (thang){
			case 4:
			case 6:
			case 9:
			case 11:
			return 30;	
		}	
	if(thang==2){
		return ((nam % 400==0) || (nam % 40==0) || (nam % 100 !=0))?29:28;
	}
	
	
}
int main(int argc, char *argv[]) {
	int thang,nam;
	do{
		printf("\n hay nhap  thang nam : ");
		scanf("%d%d",&thang,&nam);
	}while (  thang>12 || thang<1 || nam<1 );
	printf("so ngay la: %d",songaytrongthang(thang,nam));
	
	
	
	
	
	
	
	
	
	return 0;
}
