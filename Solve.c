#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n;
	printf("\n hay nhap 2 so nguyen m va n: ");
	scanf("%d%d",&m,&n);
	int a,b,c;
	int x,y,z;
	for(a=0;a>=m ;a++){
	for(b=0;a<=b ;b++){
		for(c=0;c<=n && n<=50 ;c++){
	x=2*a*b;	
	y=pow(a,2)-pow(b,2);
	z=pow(a,2)+pow(b,2);
		printf("\n nghiem cua phuong trinh la: %d %d %d",x,y,z);
	}
}
}
		
		
	

		
	
	
	
	
	
	
	
	return 0;
}
