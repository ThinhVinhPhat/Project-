#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	float dientich;
		float a,b,c;
		float p=0;
	printf("\n hay nhap so tu 1 toi 4 de chon hinh: ");
	scanf("%d",&n);
	switch (n){
	case 1:
	printf ("\n hinh tam giac");
	printf("\n hay nhap 3 canh cua tam giac: ");
	scanf("%f%f%f",&a,&b,&c);
	if( a+b>c || b+c>a || a+c>b){
		p=(a+b+c)/2;
		dientich=sqrt(p*((p-a)*(p-b)*(p-c)));
		printf("\n dien tich tam giac la: %0.1f",&dientich);		
	}		
		else {
			printf("\n3 canh ko phai cua tam giac");
		}
	break;	
		case 2:
		printf("\nhinh vuong");
		printf("\n hay nhap canh hinh vuong: ");
		scanf("%f",&a);
		dientich=a*a;
		printf ("\n dien tich hinh vuong la: %0.1f ",dientich);
		break;
			case 3:
		printf("\nhinh chu nhat");
		printf("\n hay nhap chieu dai va chieu rong hinh chu nhat: ");
		scanf("%f%f",&a,&b);
		dientich=a*b;
		printf ("\n dien tich hinh chu nhat la: %0.1f ",dientich);
		break;	
	}
	if(n==4){
		printf("\n ket thuc chuong trinh");
	}
	
	return 0;
}
