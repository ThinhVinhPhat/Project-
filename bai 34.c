#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	float s=1;
	printf("\n hay nhap n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	s=(s+i)/n;		
	}
	printf("\n trung binh cong cua n: %f",s);
	return 0;
}
